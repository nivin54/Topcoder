

import java.util.*;

public class PouringWater {

    public int getMinBottles(int N, int K) {
        List<Integer> ones, pipe;
        ones = new ArrayList<Integer>();
        pipe = new ArrayList<Integer>();
        while (N > 0) {
            ones.add(Integer.valueOf(N % 2));
            N /= 2;
        }
        int len = ones.size();
        for (int i = 0; i < len; i++) {
            if (ones.get(i) > 0) {
                int aux = (int) (Math.pow(2, i) * ones.get(i));
                pipe.add(Integer.valueOf(aux));
            }
        }
        int lena, res;
        lena = pipe.size();
        res = 0;
        for (int i = 0; i < (lena - K); i++) {
            res += (pipe.get(i + 1) - pipe.get(i));
            pipe.set(i + 1, pipe.get((i + 1)) * 2);

        }
        return res;
    }
}

