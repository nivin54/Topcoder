// END CUT HERE
import java.util.*;

public class ProductOfDigits {

    public int smallestNumber(int N) {
        int res = 0;
        if (N == 1) {
            return 1;
        }

        for (int i = 9; i >= 2; i--) {
            while (N % i == 0) {

                res += 1;
                N /= i;
            }
        }

        if (N > 7) {
            return -1;
        }


        return res;


    }

    


	
};

