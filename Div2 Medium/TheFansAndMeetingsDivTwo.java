

import java.util.*;

public class TheFansAndMeetingsDivTwo {

    public double find(int[] minJ, int[] maxJ, int[] minB, int[] maxB) {
        double res = 0.0, pc;
        int len = minJ.length;
        pc = 1.0 / (double) len;
        for (int fan = 1; fan <= 50; fan += 1) {
            for (int j = 0; j < len; j += 1) {
                if (minJ[j] <= fan && fan <= maxJ[j]) {
                    double jj = 1.0 / (double) (maxJ[j] - minJ[j] + 1);
                    for (int b = 0; b < len; b += 1) {
                        if (minB[b] <= fan && fan <= maxB[b]) {
                            double bb = 1.0 / (double) (maxB[b] - minB[b] + 1);
                            res += (pc * pc * jj * bb);

                        }
                    }
                }

            }

        }

        return res;
    }
}
