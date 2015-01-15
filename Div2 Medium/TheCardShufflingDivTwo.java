    // BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// END CUT HERE

import java.util.*;

public class TheCardShufflingDivTwo {

    int fastexpo(int X, int Mod, int P) {
        if (P == 1) {
            return X % Mod;
        }
        long k = fastexpo(X, Mod, P / 2);
        k = k * k;
        k %= Mod;
        if ((P & 1) == 1) {
            return (X * (int) k) % Mod;
        }
        return (int) k;
    }

    public int shuffle(int n, int m) {

        if (n == 1) {
            return 1;
        }

        if ((n & 1) == 0) {
            n += 1;
        }
        return fastexpo(2, n, m);
    }
}

