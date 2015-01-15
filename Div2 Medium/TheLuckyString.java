

import java.util.*;

public class TheLuckyString {

    int[] dp;
    String ss;

    int dfs(int n, char ch, int[] flag) {
        if (n == 0) {
            return 1;
        }
        int res = 0;
        int[] visit = new int[30];
        Arrays.fill(visit, 0);
        for (int i = 0; i < (int) ss.length(); i++) {
            if (ss.charAt(i) != ch && flag[i] != 1 && visit[ss.charAt(i) - 'a'] == 0) {
                flag[i] = 1;
                visit[ss.charAt(i) - 'a'] = 1;
                res += dfs(n - 1, ss.charAt(i), flag);
                flag[i] = 0;
            }
        }
        return res;

    }

    public int count(String s) {
        int sz = s.length();
        ss = s;
        dp = new int[30];
        return dfs(sz, '1', dp);

    }
}

