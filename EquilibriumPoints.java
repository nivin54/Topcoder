

import java.util.*;

public class EquilibriumPoints {

    double f(double m1, double d) {
        return m1 / d / d;
    }

    public double[] getPoints(int[] x, int[] m) {

        int n = x.length;
        double[] ret = new double[n - 1];
        for (int i = 0; i < n - 1; i++) {
            double lo = x[i], hi = x[i + 1];
            for (int iter = 0; iter < 500; iter++) {
                double mid = (lo + hi) / 2;
                double force = 0.0;
                for (int j = 0; j < i + 1; j++) {
                    force -= f(m[j], mid - x[j]);
                }
                for (int j = i + 1; j < n; j++) {
                    force += f(m[j], x[j] - mid);
                }
                if (force < 0) {
                    lo = mid;
                } else {
                    hi = mid;
                }

            }
            ret[i] = (lo + hi) / 2;
        }
        return ret;

    }
}

