import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class LastDigit {

    public long getLen(long S) {
        long len = 0;
        while (S > 0) {
            len += 1;
            S /= 10;
        }
        return len;
    }

    public long getNum(long len) {
        long result = 0;
        while (len > 0) {
            result += Math.pow(10, len - 1);
            len = len - 1;
        }
        return result;

    }

    public long findX(long S) {

        long len = getLen(S);
        long denom = (long) Math.pow(10, len - 1);
        long num = getNum(len);
        BigInteger pred = new BigInteger(Long.toString(S));
        pred = pred.multiply(BigInteger.valueOf(denom));
        pred = pred.divide(BigInteger.valueOf(num));
        long ch = pred.longValue();
        for (long i = ch; i <= (ch + 1000000); i++) {
            long res = getValue(i);

            if (res == S)
                return i;
        }


        return -1;

    }

    private long getValue(long i) {
        long res = 0;
        while (i > 0) {
            res += i;
            i /= 10;
        }

        return res;
    }
}
