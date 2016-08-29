import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class StrongPrimePower {

    public long expo(long p, long q) {
        if (q == 1)
            return p;
        if (q == 0)
            return 1L;
        long result = expo(p, q / 2);
        return (result * result * expo(p, q % 2));

    }

    boolean isPrime(int n) {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public int[] baseAndExponent(String n) {
        Long nL = Long.valueOf(n);
        /* p^q = value, p = pow (value, 1/q).
         */
        for (int q = 2; q < 60; q++) {
            double p = Math.pow((double) nL, 1.0 / (double) q);
            if (isPrime((int) Math.round(p))) {

                long Nl = expo(Math.round(p), q);

                if (Nl == nL)
                    return new int[]{(int) p, q};
            }

        }
        return new int[0];

    }

}
