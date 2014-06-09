
import java.util.*;

public class SubrectanglesOfTable {

    public long[] getQuantity(String[] table) {
        int row, column;
        row = table.length;
        column = table[0].length();
        long[] res = new long[26];
        for (int i = 0; i < row * 2; i++) {
            for (int j = 0; j < column * 2; j++) {
                res[table[i % row].charAt(j % column) - 'A'] += (i + 1) * (j + 1) * (column * 2 - j) * (row * 2 - i);
            }
        }
        return res;



    }
}

