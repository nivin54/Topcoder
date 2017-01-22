import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class GetToTheTop {

    int[] dp = new int[55];
    int[] color = new int[55];
    int K;

    public class Pair<L, R> {
        public L getL() {
            return l;
        }

        public void setL(L l) {
            this.l = l;
        }

        public R getR() {
            return r;
        }

        public void setR(R r) {
            this.r = r;
        }

        private L l;
        private R r;

        public int getColor() {
            return color;
        }

        public void setColor(int color) {
            this.color = color;
        }

        private int color;

        public int getLength() {
            return length;
        }

        public void setLength(int length) {
            this.length = length;
        }

        private int length;

        public int getSweets() {
            return sweets;
        }

        public void setSweets(int sweets) {
            this.sweets = sweets;
        }

        private int sweets;

        public Pair(L l, R r, int len, int sweet) {
            this.l = l;
            this.r = r;
            this.length = len;
            this.sweets = sweet;
        }

    }

    public class pointCompare implements Comparator<Pair> {

        @Override
        public int compare(Pair o1, Pair o2) {
            if ((int) o1.r != (int) o2.r) {
                return (int) o1.r - (int) o2.r;
            }
            return (int) o1.l - (int) o2.l;

        }
    }

    List<Pair<Integer, Integer>> Points = new ArrayList<>();

    int sqr(int val) {
        return val * val;
    }

    boolean eculid(int x, int y, int k, int x_2, int y_2, int k_2) {
        int tx, tx_2;
        tx = x + k;
        tx_2 = x_2 + k_2;
        if ((x <= x_2 && x_2 <= tx) || (x_2 <= x && x <= tx_2))
            return (Math.abs(y - y_2) <= K);
        return ((sqr(x_2 - tx) + sqr(y_2 - y) <= sqr(K)) || (sqr(x - tx_2) + sqr(y - y_2)) <= sqr(K));


    }

    int run(int pos) {
        if (dp[pos] != Integer.MIN_VALUE)
            return dp[pos];
        int set_points = 0;
        int len = Points.size();
        int r = color[pos], he;
        for (int i = 0; i < len; i++)
            if (r == color[i])
                set_points += Points.get(i).getSweets();

        int max = 0;
        he = Points.get(pos).getR();
        for (int p = 0; p < len; p++)
            if (r == color[p])
                for (int i = p + 1; i < len; i++)
                    if (r != color[i] && Points.get(i).getR() > he && eculid(Points.get(p).getL(), Points.get(p).getR(), Points.get(p).getLength(), Points.get(i).getL(), Points.get(i).getR(), Points.get(i).getLength()))
                        max = Math.max(run(i), max);


        for (int i = 0; i < len; i++)
            if (r == color[i]){
                dp[i] = Math.max(dp[i], max + set_points);
            }

        return (max + set_points);

    }

    Boolean is_reachable(int ax, int ak, int px, int allowed) {
        return (Math.abs(px - ax - ak) <= allowed);

    }

    public int collectSweets(int K, int[] sweets, int[] x, int[] y, int[] stairLength) {

        for (int i = 0; i < x.length; i++) {
            Points.add(new Pair<>(new Integer(x[i]), new Integer(y[i]), stairLength[i], sweets[i]));
        }
        Points.sort(new pointCompare());
        Arrays.fill(dp, Integer.MIN_VALUE);
        color[0] = 1;
        int value = 1;
        this.K = K;
        for (int i = 1; i < Points.size(); i++) {
            int px, py, flag, pk;
            px = Points.get(i).getL();
            py = Points.get(i).getR();
            pk = Points.get(i).getLength();
            flag = 0;
            for (int j = 0; j < i; j++) {

                int ax, ay, ak;
                ax = Points.get(j).getL();
                ay = Points.get(j).getR();
                ak = Points.get(j).getLength();
                if (py == ay && eculid(ax, ay, ak, px, py, pk)) {
                    color[i] = color[j];
                    flag = 1;
                    break;
                }

            }
            if (flag == 0) {
                value++;
                color[i] = value;
            }
        }
        int max = 0;

        for (int i = 0; i < Points.size(); i++) {
            int h = Points.get(i).getR();
            if (h <= K)
                max = Math.max(max, run(i));

        }


        return max;
    }
}
