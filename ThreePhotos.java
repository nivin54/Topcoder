
// BEGIN CU
import java.util.*;

public class ThreePhotos {

    public int removeCubes(String[] A, String[] B, String[] C) {
        int sz = A[0].length();
        int[][] a, b, c;
        a = new int[sz][sz];
        b = new int[sz][sz];
        c = new int[sz][sz];
        int ret = sz * sz * sz;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    if (A[i].charAt(j) == 'Y' && B[i].charAt(k) == 'Y' && C[j].charAt(k) == 'Y') {
                        ret = ret - 1;
                        a[i][j] = 1;
                        b[i][k] = 1;
                        c[j][k] = 1;

                    }

                }
            }
        }
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                if ((A[i].charAt(j) == 'Y' && a[i][j] == 0) || (B[i].charAt(j) == 'Y' && b[i][j] == 0) || (C[i].charAt(j) == 'Y' && c[i][j] == 0)) {
                    return -1;
                }
            }
        }
        return ret;

    }
}

