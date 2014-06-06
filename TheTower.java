
import java.util.*;

public class TheTower {

    public int[] count(int[] x, int[] y) {
        int n = x.length;
        int[] res = new int[n];
        int[] dist = new int[n];
        Arrays.fill(res, 999999999);
        Arrays.fill(res, 999999999);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    dist[k] = Math.abs(x[i] - x[k]) + Math.abs(y[j] - y[k]);
                }

                Arrays.sort(dist);
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += dist[k];
                    res[k] = Math.min(res[k], sum);

                }

            }
        }

        return res;
    }
}

