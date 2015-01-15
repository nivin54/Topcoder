
import java.util.*;

public class CorporationSalary {

    public String[] relation;
    public long dp[];

    public long run(int u) {
        if (dp[u] != -1) {
            return dp[u];
        }
        dp[u] = 0;
        for (int j = 0; j < relation[u].length(); j++) {
            if (relation[u].charAt(j) == 'Y') {
                dp[u] = dp[u] + run(j);
            }
        }
        if (dp[u] == 0) {
            dp[u] += 1;
        }
        return dp[u];
    }

    public long totalSalary(String[] relations) {
        relation = relations;
        long result = 0;
	dp = new long[105];
        Arrays.fill(dp, -1);
        for (int i = 0; i < relations.length; i++) {
            result += run(i);
        }
        return result;
    }
}

