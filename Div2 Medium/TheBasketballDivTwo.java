
import java.util.*;

public class TheBasketballDivTwo {

    int[] goal;
    int sz;
    String[] tables;

    int findQ() {
        int m = 0;
        for (int i = 0; i < sz; ++i) {
            m = Math.max(m, goal[i]);
        }
        return m;
    }

    int dfs(int i, int j) {
        if (i == sz) {
            return findQ();
        }

        int res = 100000;
        if (j == sz) {
            return dfs(i + 1, 0);
        } else {
            if (tables[i].charAt(j) != '?') {
                return dfs(i, j + 1);
            }

            goal[i] += 1;
            res = dfs(i, j + 1);
            goal[i] -= 1;
            goal[j] += 1;
            res = Math.min(res, dfs(i, j + 1));
            goal[j] -= 1;
        }
        return res;
    }

    public int find(String[] table) {
        sz = table.length;
        tables = table;
        goal = new int[sz];
        for (int i = 0; i < sz; ++i) {
            for (int j = 0; j < sz; ++j) {
                if (table[i].charAt(j) == 'W') {
                    goal[i] += 1;
                } else if (table[i].charAt(j) == 'L') {
                    goal[j] += 1;
                }
            }
        }
        return dfs(0, 0);

    }
}

