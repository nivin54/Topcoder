public class RevealTriangle {


    int get_value(int b, int c) {
        if (b > c)
            return c + 10 - b;
        return c - b;
    }

    public String[] calcTriangle(String[] questionMarkTriangle) {

        int n = questionMarkTriangle.length;

        for (int i = n - 2; i >= 0; i--) {
            int pos = 0;
            for (int j = 0; j < n - i; j++)
                if (questionMarkTriangle[i].charAt(j) != '?') {
                    pos = j;
                    break;
                }

            for (int j = pos - 1; j >= 0; j--) {
                int b = questionMarkTriangle[i].charAt(j + 1) - '0';
                int c = questionMarkTriangle[i + 1].charAt(j) - '0';
                int a = get_value(b, c);
                char[] r = questionMarkTriangle[i].toCharArray();
                r[j] = (char) (a + '0');
                questionMarkTriangle[i] = String.copyValueOf(r);

            }

            for (int j = pos + 1; j < n - i; j++) {
                int b = questionMarkTriangle[i].charAt(j - 1) - '0';
                int c = questionMarkTriangle[i + 1].charAt(j - 1) - '0';
                int a = get_value(b, c);

                char[] r = questionMarkTriangle[i].toCharArray();
                r[j] = (char) (a + '0');
                questionMarkTriangle[i] = String.copyValueOf(r);


            }
        }


        return questionMarkTriangle;
    }


    /*
 * Complete the function below.
 */

    static int checkforlowest(int i, int d, String ts)
    {
        int n = ts.length();
        if(i + d > n)
            return -1;
        int val = i, mc = ts.charAt(i) - '0';
        for(int j = i ; j < n ; j++ )
        {
            if(j + d <= n && ts.charAt(j) - '0' < mc )
            {
                val = j;
                mc = ts.charAt(j) - '0';
            }

        }
        return val;


    }
    static String improbabilityCalculator(String coordinates, int remove) {

        if (remove == 0)
            return coordinates;
        int len = coordinates.length();
        if (len < remove)
            return "0";
        int d = remove, i = 0;

        String ans = "";
        while (d > 0) {
            int res = checkforlowest(i, d, coordinates);
            if (res == -1)
                break;
            else {
                ans += coordinates.charAt(res);
                i = res + 1;
                d--;
            }
        }
        if (d != 0)
            for (int k = i; k < len; k++)
                ans += coordinates.charAt(k);


        return ans;
    }




    public static void main(String[] args) {
        RevealTriangle revealTriangle = new RevealTriangle();
        revealTriangle.improbabilityCalculator("746209249", 5);
    }
}
