// END CUT HERE
import java.util.*;

public class BestView {

    public int numberOfBuildings(int[] heights) {

        int result = 0, len = heights.length;
        for (int i = 0; i < len; i++) {
            double angle, c;
            angle = 9999999999.0;
            int aux = 0;
            for (int j = i - 1; j >= 0; j--) {
                c = (double)(heights[i] - heights[j]) / (double)(i - j);
                if (c < angle) {
                    aux += 1;
                    angle = c;
                }

            }
            angle = 9999999999.0;
            for (int j = i + 1; j < len; j++) {
                c = (double)(heights[i] - heights[j]) / (double)(j - i);
                if (c < angle) {
                    aux += 1;
                    angle = c;
                }
            }

            result = Math.max(result, aux);
        }
        return result;

    }
}

