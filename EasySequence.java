
import java.util.*;

public class EasySequence {

    public int find(int[] A, int[] B) {
        int[] seq = new int[10000000];
        int sz = -1, sum = 0, n;
        n = A.length;
        for (int i = 0; i < n; ++i) {
            seq[++sz] = A[i];
            sum += A[i];
        }
        seq[++sz] = (sum % 10);
        for (int i = 0; i < n + 1000000; ++i) {
            seq[++sz] = ((2 * seq[sz - 1] - seq[sz - 1 - n] + 10) % 10);
        }
        int szb = B.length;
        for (int i = 0; i + szb <= sz; ++i) {
            boolean flag = true;
            for (int j = 0; j < szb; ++j) {
                if (B[j] != seq[i + j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return i;
            }
        }
        return -1;

    }
}

