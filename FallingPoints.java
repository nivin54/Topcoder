// END CUT HERE
import java.util.*;

public class FallingPoints {

    public double[] getHeights(int[] X, int R) {

        double[] result = new double[X.length];
        for (int i = 1; i < X.length; i++) {
            if (Math.abs(X[i - 1] - X[i]) > R) {
                result[i] = 0.0;
                continue;
            }
            result[i] = result[i - 1] + Math.sqrt(R * R - (X[i - 1] - X[i]) * (X[i - 1] - X[i]));
        }
        return result;

    }
}

