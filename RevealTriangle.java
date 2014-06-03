
import java.util.*;

public class RevealTriangle {

    public String replace(String str, int index, char replace) {
        if (str == null) {
            return str;
        } else if (index < 0 || index >= str.length()) {
            return str;
        }
        char[] chars = str.toCharArray();
        chars[index] = replace;
        return String.valueOf(chars);
    }

    public String[] calcTriangle(String[] questionMarkTriangle) {
        Collections.reverse(Arrays.asList(questionMarkTriangle));
        for (int i = 1; i < questionMarkTriangle.length; i++) {
            int pos=0, a, b, c;
            for (int j = 0; j < questionMarkTriangle[i].length(); j++) {
                if (questionMarkTriangle[i].charAt(j) != '?') {
                    pos = j;
                }
            }
            a = questionMarkTriangle[i].charAt(pos) - '0';
            for (int j = pos - 1; j >= 0; j--) {
                c = questionMarkTriangle[i - 1].charAt(j) - '0';
                if (c < a) {
                    b = c + 10 - a;
                } else {
                    b = c - a;
                }
                
                questionMarkTriangle[i]=replace(questionMarkTriangle[i],j,(char)(b+'0'));
                a = b;
            }
            a = questionMarkTriangle[i].charAt(pos) - '0';
            int len = questionMarkTriangle[i].length();
            for (int j = pos + 1; j < len; j++) {
                c = questionMarkTriangle[i - 1].charAt(j - 1) - '0';
                if (c < a) {
                    b = c + 10 - a;
                } else {
                    b = c - a;
                }
                questionMarkTriangle[i]=replace(questionMarkTriangle[i],j,(char)(b+'0'));
                a = b;
            }

        }
        Collections.reverse(Arrays.asList(questionMarkTriangle));
        return questionMarkTriangle;
    }
}

