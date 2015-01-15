// END CUT HERE
import java.util.*;

public class CirclesCountry {

    int pointinside(int x, int y, int X, int Y, int R) {

        int xx, yy, D;
        xx = X - x;
        yy = Y - y;
        D = xx * xx + yy * yy;
        return R * R > D ? 1 : 0;
    }

    public int leastBorders(int[] X, int[] Y, int[] R, int x1, int y1, int x2, int y2) {

        int dist;
        dist = 0;
        int len = X.length;
        for (int i = 0; i < len; i++) {
            int a, b;
            a = pointinside(x1, y1, X[i], Y[i], R[i]);
            b = pointinside(x2, y2, X[i], Y[i], R[i]);
            if ((a ^ b) == 1) {
                dist++;
            }

        }
        return dist;

    }
}

