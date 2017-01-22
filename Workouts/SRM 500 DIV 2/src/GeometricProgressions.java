import java.util.HashSet;
import java.util.Set;

public class GeometricProgressions {

    public class Pair {
        long x, y;

        public Pair(long x, long y) {
            this.x = x;
            this.y = y;
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (o == null || getClass() != o.getClass()) return false;

            Pair pair = (Pair) o;

            if (x != pair.x) return false;
            return y == pair.y;

        }

        @Override
        public int hashCode() {
            int result = (int) (x ^ (x >>> 32));
            result = 31 * result + (int) (y ^ (y >>> 32));
            return result;
        }
    }

    public int count(int b1, int q1, int n1, int b2, int q2, int n2) {

        int modA, modB;
        modA = 1000000007;
        modB = 1234567891;
        long x = b1, y = b1;
        Set<Pair> S = new HashSet<>();
        for (int i = 0; i < n1; i++) {
            S.add(new Pair(x, y));
            x = (x * (long) (q1)) % modA;
            y = (y * (long) (q1)) % modB;
        }
        x = b2;
        y = b2;
        for (int i = 0; i < n2; i++) {
            S.add(new Pair(x, y));
            x = (x * (long) (q2)) % modA;
            y = (y * (long) (q2)) % modB;

        }

        return S.size();
    }
}
