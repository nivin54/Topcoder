
import java.util.*;

public class BitwiseEquations {

    String bitwise(int n) {
        String res = "";
        while (n > 0) {
            res += Character.toString((char) (n % 2 + 48));
            n /= 2;
        }
        return res;
    }

    long add(String a, String b) {
        int len = a.length(), j = 0;
        long res = 0;
        for (int i = 0; i < b.length() && j<len; i++) {
            if (b.charAt(i) == '1') {
                continue;
            } else {
                res += Math.pow(2, i) * (a.charAt(j) - 48);
                j++;

            }

        }
        int K = b.length();
        while (j < len) {
            res += (long) Math.pow(2, K) * (long) (a.charAt(j) - 48);
            j++;
            K++;
        }
        return res;
    }

    public long kthPlusOrSolution(int x, int k) {

        String K, X;
        K = bitwise(k);
        X = bitwise(x);
        return add(K, X);

    }
}

