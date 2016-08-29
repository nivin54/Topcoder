public class FIELDDiagrams {

    public long countDiagrams(int fieldOrder) {

        long dp[][] = new long[fieldOrder][fieldOrder];
        dp[0][0] = 1L;
        for (int i = 1; i < fieldOrder; i++) {
            for (int j = 0; j <= i; j++) {
                dp[i][j] = 1L;
                for (int k = 0; k <= j; k++) {
                    dp[i][j] += dp[i - 1][k];
                }

            }
        }

        long result = 0L;
        for (int i = 0; i < fieldOrder; i++)
            result += dp[fieldOrder - 1][i];
        return result;

    }
}
