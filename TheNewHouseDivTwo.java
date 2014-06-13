// END CUT HERE
import java.util.*;

public class TheNewHouseDivTwo {

    int AC, n, e1, e2, e3, e4;

    public int count(int[] x, int[] y) {
        n = x.length;
        AC = 0;
        for (int i = -100; i <= 100; i++) {
            for (int j = -100; j <= 100; j++) {

                e1 = e2 = e3 = e4 = 0;
                for (int k = 0; k < n; k++) {
                    if (x[k] == i && y[k] > j) {
                        e1 = 1;
                    }
                    if (x[k] == i && y[k] < j) {
                        e2 = 1;
                    }
                    if (y[k] == j && x[k] > i) {
                        e3 = 1;
                    }
                    if (y[k] == j && x[k] < i) {
                        e4 = 1;
                    }
                }
                if (e1 + e2 + e3 + e4 == 4) {
                    AC++;
                }
            }
        }
        return AC;


    }
}

