import java.util.*;

public class SentenceDecomposition {

    int[] dp;
    int len;
    String word;
    List<String> validword;

    boolean canmatch(int index, String words) {
        String aux = "";
        for (int i = index; i < Math.min(index + words.length(), len); i++) {
            aux = aux + Character.toString(word.charAt(i));
        }
        char[] test = aux.toCharArray();
        Arrays.sort(test);
        aux = String.valueOf(test);
        test = words.toCharArray();
        Arrays.sort(test);
        words = String.valueOf(test);
        if (aux.equals(words)) {
            return true;
        }
        return false;
    }

    int costmatch(int index, String words) {
        int cost = 0;
        for (int i = index, j = 0; i < len && j < words.length(); i++, j++) {
            if (words.charAt(j) != word.charAt(i)) {
                cost = cost + 1;
            }
        }
        
        return cost;
    }

    int run(int index) {
        if (index == len) {
            return 0;
        }
        if (dp[index] != -1) {
            return dp[index];
        }
        dp[index] = 999999999;
        for (int i = 0; i < validword.size(); i++) {
            if (canmatch(index, validword.get(i)) == true) {
                dp[index] = Math.min(dp[index], costmatch(index, validword.get(i)) + run(index + validword.get(i).length()));
            }
        }
        return dp[index];
    }

    public int decompose(String sentence, String[] validWords) {

        word = sentence;
        validword = Arrays.asList(validWords);
        len = sentence.length();
        dp = new int[105];
        Arrays.fill(dp, -1);
        return run(0) == 999999999 ? -1 : run(0);
    }
}

