// END CUT HERE
import java.util.*;

public class CrazyBot {

    int[][] visit;
    double Pe, Pw, Ps, Pn;

    double run(int x, int y, int n) {
        if (visit[x][y] == 1) {
            return 0.0;
        }
        if (n == 0) {
            return 1.0;
        }
        visit[x][y] = 1;
        double res = 0.0;
        res += run(x - 1, y, n - 1) * Pw;
        res += run(x, y - 1, n - 1) * Pn;
        res += run(x, y + 1, n - 1) * Ps;
        res += run(x + 1, y, n - 1) * Pe;
        visit[x][y] = 0;
        return res;
    }

    public double getProbability(int n, int east, int west, int south, int north) {
        visit = new int[55][55];
        Pe = east / 100.00;
        Pw = west / 100.00;
        Ps = south / 100.00;
        Pn = north / 100.00;
        return run(20, 20, n);
    }
}

