
import java.util.*;

public class WordsGame {

    public int minimumSwaps(String[] grid, String word) {
        String sorted_word = word;
        char[] chars = sorted_word.toCharArray();
        Arrays.sort(chars);
        sorted_word = new String(chars);
        int n = word.length();
        int ans = 100000000;
        for (int i = 0;  i < 2 * n; ++i) {
            String W = new String();
            String sorted_W = new String();
            if (i < n) {
                W = grid[i];
            } else {
                for (int j = 0; j < n; ++j) {
                    W += grid[j].charAt(i - n);
                }
            }
            sorted_W = W;
            char[] charss = sorted_W.toCharArray();
            Arrays.sort(charss);
            sorted_W = new String(charss);
            if (sorted_W.equals(sorted_word) == false) {
                continue;
            }
            int[] permutation = new int[n];
            for (int j = 0; j < n; ++j) {
                permutation[j] = word.indexOf(W.charAt(j));
            }
            int numberofcyles = 0;
            for (int j = 0; j < n; ++j) {
                if (permutation[j] != -1) {
                    numberofcyles += 1;
                    while (permutation[j] != -1) {
                        int next = permutation[j];
                        permutation[j] = -1;
                        j = next;
                    }
                }
            }
            int res = n - numberofcyles;
            ans = Math.min(ans, res);
        }
        if (ans > n) {
            ans = -1;
        }
        return ans;
    }
}

