import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class TheSumOfLuckyNumbers {

    int[] dp = new int[1000005];

    public int[] sum(int n) {
        List<Integer> list = new ArrayList<>();
        list.add(4);
        list.add(7);
        for (int i = 0; i < list.size() && list.get(i) <= 1000000; i++) {
            int number = list.get(i);
            list.add(number * 10 + 4);
            list.add(number * 10 + 7);
        }
        Arrays.fill(dp, Integer.MAX_VALUE - 100000);
        dp[0] = 0;
        for (int i = 4; i <= 1000000; i++)
            for (int j = 0; j < list.size() && list.get(j) <= i; j++) {

                if (dp[i] > dp[i - list.get(j)] + 1) {
                    dp[i] = dp[i - list.get(j)] + 1;

                }
            }

        if (dp[n] != Integer.MAX_VALUE - 100000) {
            int[] result = new int[dp[n]];
            int N = n;
            int j = 0;
            while (N > 0) {
                for (int i = 0; i < list.size() && list.get(i) <= N; i++) {
                    if (dp[N] == dp[N - list.get(i)] + 1) {
                        result[j] = list.get(i);
                        j++;
                        N -= list.get(i);
                        break;
                    }
                }
            }
            return result;

        }
        return new int[]{};

    }


    public static void main(String[] args) {
        TheSumOfLuckyNumbers theSumOfLuckyNumbers = new TheSumOfLuckyNumbers();
        theSumOfLuckyNumbers.sum(8);

    }
}