import java.util.*;

public class FIELDDiagrams {

    public long dp[][] = new long[31][31];
    public int N;

    public long run(int n, int k) {
        if (n == 0) {
            return 0;
        }
        if (dp[n][k] != -1) {
            return dp[n][k];
        }
        dp[n][k] = 0;
        for (int i = Math.min(n, N - k - 1); i >= 1; i--) {
            dp[n][k] += (1 + run(i, k + 1));
        }
        return dp[n][k];
    }

    public long countDiagrams(int fieldOrder) {

        N = fieldOrder;
        for(int i=0;i<31;i++)
             Arrays.fill(dp[i], -1);
        long res = 0;
        for (int i = fieldOrder; i >= 1; i--) {
            res = res + 1 + run(i, 0);
        }
        System.out.println(res);
        return res;
    }
}

