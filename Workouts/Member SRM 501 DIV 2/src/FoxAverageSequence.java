import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class FoxAverageSequence {

    public int theCount(int[] seq) {

        int len = seq.length;
        int[][][][] dp = new int[42][42][1602][2];
        dp[0][0][0][0] = 1;
        for (int i = 1; i <= len; i++)
            for (int previous_value = 0; previous_value <= 40; previous_value++)
                for (int target_sum = 0; target_sum <= 1600; target_sum++) {
                    int upper_bound = target_sum / Math.max(i - 1, 1);
                    for (int try_values = Math.min(40, upper_bound); try_values >= previous_value; try_values--)
                        if ((seq[i - 1] == -1 || seq[i - 1] == try_values) && try_values + target_sum <= 1600)
                            dp[i][try_values][try_values + target_sum][0] += dp[i - 1][previous_value][target_sum][1];

                    int start = Math.min(40, upper_bound);
                    if (i == 1)
                        start = 40;
                    for (int try_values = start; try_values >= 0; try_values--) {
                        if ((seq[i - 1] == -1 || seq[i - 1] == try_values) && try_values + target_sum <= 1600) {
                            if (try_values < previous_value)
                                dp[i][try_values][target_sum + try_values][1] += dp[i - 1][previous_value][target_sum][0];
                            else
                                dp[i][try_values][target_sum + try_values][0] += dp[i - 1][previous_value][target_sum][0];
                        }

                    }


                }
        int result = 0;
        for (int end_no = 0; end_no <= 40; end_no++)
            for (int target_sum = 0; target_sum <= 1600; target_sum++) {
                result += (dp[len][end_no][target_sum][0] + dp[len][end_no][target_sum][1]);
            }

        return result;
    }
}
