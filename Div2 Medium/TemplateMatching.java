
// END CUT HERE
import java.util.*;

public class TemplateMatching {

    int costprefix(String a, String b) {
        b = new StringBuffer(b).reverse().toString();
        int ma = 0;
        for (int i = 1; i <= Math.min(a.length(), b.length()); i++) {
            String auxa, auxb;
            auxa = a.substring(0, i);
            auxb = b.substring(0, i);
            auxb = new StringBuffer(auxb).reverse().toString();
            if (auxa.equals(auxb)) {
                ma = i;
            }

        }
        return ma;

    }

    int costsuffix(String a, String b) {
        a = new StringBuffer(a).reverse().toString();
        int ma = 0;
        for (int i = 1; i <= Math.min(a.length(), b.length()); i++) {
            String auxa, auxb;
            auxa = a.substring(0, i);
            auxb = b.substring(0, i);
            auxa = new StringBuffer(auxa).reverse().toString();
            if (auxa.equals(auxb)) {
                ma = i;
            }

        }
        return ma;

    }

    public String bestMatch(String text, String prefix, String suffix) {

        String ans = "z";
        int len = text.length(), ma = 0, pre = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                String subs = text.substring(i, j + 1);
                int a, b;
                a = costprefix(subs, prefix);
                b = costsuffix(subs, suffix);
                System.out.println(subs + " " + a + " " + b);
                if (ma == a + b && pre <= a) {
                    if (pre < a) {
                        ans = subs;
                        pre = a;
                    } else if (subs.compareTo(ans) < 0) {
                        ans = subs;
                    }
                } else if (ma < a + b) {
                    ans = subs;
                    ma = a + b;
                    pre = a;
                }
            }


        }
        return ans;
    }
};

