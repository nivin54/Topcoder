import java.util.*;
public class StrongPrimePower {

    public boolean isprime(long x) {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    public int[] baseAndExponent(String n) {
        int[] res;
        long number = 0;
        for (int i = 0; i < (int) n.length(); i++) {
            number = number * 10 + n.charAt(i) - '0';
        }
        for (int q = 2; q < 60; q++) {
            long p = Math.round( Math.pow(number, 1.0 / q));
            if (isprime(p)) {
                int Q = q;
                long P = p;
                while (Q != 1) {
                    P *= p;
                    Q--;

                }
                if (P == number) {

                    System.out.println((int) p);
                    return new int[]{(int) p, q};
                }

            }
        }
        return new int[]{};
    }
}

