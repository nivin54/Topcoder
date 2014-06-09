// END CUT HERE
import java.util.*;

public class LampsGrid {

    public int mostLit(String[] initial, int K) {
        int m, n, res;
        res = 0;
        n = initial.length;
        m = initial[0].length();
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int ii = i + 1; ii < n; ii++) 
                if (initial[i].equals(initial[ii])) 
                    count++;              
                int needs = 0;
                for (int j = 0; j < m; j++) 
                    if (initial[i].charAt(j) == '0') 
                        needs++;                                    
                if (needs <= K && (needs - K) % 2 == 0) 
                    res = Math.max(res, count);                            
        }
        return res;
    }
}

