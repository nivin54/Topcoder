import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class IdealString {

    public String construct(int length) {
        int[] dp = new int[1000];
        dp[1] = 1;
        for (int i = 1; i <= 100; i++) {
            if (dp[i] != 0)

                for (int start = dp[i] + 1; start <= i + 1; start++)
                {if(i == 7)
                            System.out.println("I ");
                        //if(dp[start + i] == 0 )
                    if(dp[start + i]  < start)
                                dp[start + i] = start;
                    if(start + i == 15)
                    {
                        System.out.println(start + i + " " + dp[start + i] + " " + start + " " + i );
                    }

                }

        }
        List<Integer> result = new ArrayList<>();
        int n = length;
        if (dp[n] == 0)
            return "";
        while (n > 0) {
            result.add(dp[n] - 1);

            n -= dp[n];
        }
        String key = String.format("%1$" + length + "s", " ");
        StringBuilder answer = new StringBuilder(key);
        int characters = result.size();
        char start = 'A';
        for (int i = 0; i < characters; i++) {
            int idx = characters - i - 1;
            answer.setCharAt(result.get(idx), (char) (start + i));
        }
        for (int i = 0; i < characters; i++) {
            char toFill = (char) ('A' + i);
            int rem = result.get(characters - i - 1) ;

            for (int j = 0; j < length && rem > 0; j++)
                if (answer.charAt(j) == ' ') {
                    answer.setCharAt(j, toFill);
                    rem--;
                }
        }
        return answer.toString();
    }
}
