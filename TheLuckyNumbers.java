
import java.util.*;

public class TheLuckyNumbers {

    public int A, B, res;

    public int run(int x) {
        if (x >= A && x <= B) {
            return 1 + run(x * 10 + 4) + run(x * 10 + 7);
        }
        if (x < A) {
            return run(x * 10 + 4) + run(x * 10 + 7);
        }
        return 0;
    }

    public int count(int a, int b) {
        A = a;
        B = b;
        res = 0;
        res += run(4);
        res += run(7);
        return res;

    }

   
}

