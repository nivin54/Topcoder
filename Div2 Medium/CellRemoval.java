// END CUT HERE
import java.util.*;

public class CellRemoval {

    int[] parents, children;

    int dfs(int u) {
        int len = parents.length;
        int res = 0;
        for (int i = 0; i < len; i++) {
            if (parents[i] == u) {
                res += dfs(i);
            }

        }
        if (res == 0) {
            res += 1;
        }
        children[u] = res;
        return res;
    }

    public int cellsLeft(int[] parent, int deletedCell) {
        parents = parent;
        children = new int[55];
        int start = 0;
        for (int i = 0; i < (int) parent.length; i++) {
            if (parent[i] == -1) {
                start = i;
            }

        }
        int total = dfs(start);
        return total - children[deletedCell];


    }
}

