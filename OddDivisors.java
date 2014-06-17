import java.util.*;

public class OddDivisors {

    long oddsum(long N) {
        long res = (N + 1) / 2;
        return res * res;

    }

    long F(long N) {
        if (N <= 2) {
            return N;
        }
        return oddsum(N) + F(N / 2);

    }

    public long findSum(int N) {
        return F(N);

    }
}
