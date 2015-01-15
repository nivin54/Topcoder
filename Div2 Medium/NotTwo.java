// END CUT HERE
import java.util.*;

public class NotTwo {

    public int maxStones(int width, int height) {
        int groupf, res, remainder, remainderh, th, oddth;
        remainder = width % 4;
        groupf = width - width % 4;
        res = 0;
        res += groupf/2 * height;
        remainderh = height % 2;
	th = (height - remainderh) / 2;
        oddth = th - th/2;         
        if (remainder <= 2) {
            res += remainder * oddth * 2;
            if ((th & 1) == 0 && remainderh > 0) {
                res += remainder * remainderh;
            }
        } else {
            res += 2 * oddth * 2;            
            res += (th - (th + 1) / 2) * 2;
            if (((th & 1) == 0) && remainderh > 0) {
                res += 2 * remainderh;
            } else {
                res += remainderh;
            }
        }
        return res;

    }
}

