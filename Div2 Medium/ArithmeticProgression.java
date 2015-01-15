
import java.util.*;

public class ArithmeticProgression {

    public double minCommonDifference(int a0, int[] seq) {
        int d = 0;
        double ma = 0.0;
        if (seq.length > 0) {
            d = seq[0] - a0;
        }
        for (int i = 1; i <= seq.length; i++) {
            int aux = a0 + d * i;
            int c = seq[i - 1] - aux, d0 = seq[i - 1] - (a0 + d * (i - 1));
            double mm = ((double) (seq[i - 1] - a0) / (double) i) - (double) d;
            if (c < 0 || d0 < d || d < 0 || mm >= 1.0) {
                return -1;
            }
            ma = Math.max(ma, mm);
        }
        ma = ma + d;
        for (int i = 1; i <= seq.length; i++) {
            int coeff = (int) (ma * i);
            if (coeff + a0 != seq[i - 1]) {
                return -1;
            }
        }
        return ma;
    }
}

