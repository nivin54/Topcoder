
// END CUT HERE
import java.util.*;

public class AddElectricalWires {

    public int sum(int x) {
        int res = 0;
        while (x > 0) {
            x--;
            res += x;
        }
        return res;

    }
    String[] wire;
    int[] visit;

    public int dfs(int u) {
        if (visit[u] == 1) {
            return 0;
        }
        int res = 1;
        visit[u] = 1;
        for (int j = 0; j < wire[u].length(); j++) {
            if (wire[u].charAt(j) == '1') {
                res = res + dfs(j);
            }
        }
        return res;
    }

    public int maxNewWires(String[] wires, int[] gridConnections) {

        wire = wires;
        int ans = 0, wired = 0;
        visit = new int[105];
        Arrays.fill(visit, ans);
        List<Integer> PQ = new ArrayList<Integer>();
        for (int i = 0; i < gridConnections.length; i++) {
            PQ.add(dfs(gridConnections[i]));
        }
        for (int i = 0; i < wires.length; i++) {
            for (int j = 0; j < wires[i].length(); j++) {
                if (wires[i].charAt(j) == '1') {
                    wired++;
                }
            }
        }
        Collections.sort(PQ);
        Collections.reverse(PQ);
        for (int i = 0; i < wires[0].length(); i++) {
            if (visit[i] == 0) {
                PQ.set(0, PQ.get(0) + 1);
            }
        }
        for (int i = 0; i < PQ.size(); i++) {
            ans = ans + sum(PQ.get(i));
        }
        return ans - (wired / 2);


    }
}

