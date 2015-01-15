
// END CUT HERE
import java.util.*;

public class OrderedNim {

    public String winner(int[] layout) {

        int player = 0, x = 0, sz;
        sz = layout.length;
        while (x < sz && layout[x] == 1) 
        {
            player ^= 1;
            ++x;
        }
        if (x == sz) {
            player ^= 1;
        }
        return player == 0 ? "Alice" : "Bob";




    }
}

