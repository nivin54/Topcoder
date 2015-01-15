
import java.util.*;

public class TheSwap {

    int[][] dp;
    int len;

    int getvalue(List<Integer> number) {
        int ans = 0;
        int len = number.size();
        for (int i = 0; i < len; i++) {
            ans = ans * 10 + number.get(i);
        }
        return ans;
    }

    int run(int K, List<Integer> number) {
        int n = getvalue(number);
        if (K == 0) {
            return n;
        }
        if (dp[n][K] != 0) {
            return dp[n][K];
        }
        dp[n][K] = -1;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (i == 0 && number.get(j) == 0) {
                    continue;
                }
                Collections.swap(number, i, j);
                dp[n][K] = Math.max(dp[n][K], run(K - 1, number));
                Collections.swap(number, i, j);

            }
        }
        return dp[n][K];

    }

    public int findMax(int n, int k) {

        dp = new int[1000000][11];
        List<Integer> nn = new ArrayList<Integer>();
        while (n > 0) {
            nn.add(n % 10);
            n /= 10;
            len++;
          //  System.out.print(len);
        }
        System.out.println(n+" "+len+" "+k);
        Collections.reverse(nn);
        return run(k, nn);
    }
}

