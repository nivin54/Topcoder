public class TheCowDivTwo {
    private static final int MOD = 1000000007;

    public int find(int N, int K) {

        int[][][] dp = new int[2][1001][50];

        dp[0][0][0] = 1;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) {
                dp[(i + 1) % 2][j][0] = dp[i % 2][j][0];
                for (int k = 1; k <= K; k++)
                    dp[(i + 1) % 2][(j + i) % N][k] = (dp[i % 2][(j + i) % N][k] + dp[i % 2][j][k - 1]) % MOD;
            }
        return dp[N % 2][0][K];
    }
}
