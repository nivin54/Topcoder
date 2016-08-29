import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class LightedPanels {

    int touchDown(int i, int j, String[] board) {
        int m, n;
        m = board.length;
        n = board[0].length();
        Boolean[][] bboard = new Boolean[m][n];
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (board[row].charAt(col) == '*') {
                    bboard[row][col] = Boolean.TRUE;

                } else
                    bboard[row][col] = Boolean.FALSE;
            }
        }
        int result = 0;
        for (int row = 0; row < m; row++)
            if (((1 << row) & i) > 0) {
                flipCell(row, 0, bboard, m, n);
                result += 1;
            }
        for (int col = 0; col < n; col++)
            if (((1 << col) & j) > 0) {
                flipCell(0, col, bboard, m, n);
                result += 1;
            }
        for (int row = 1; row < m; row++)
            for (int col = 1; col < n; col++) {
                if (bboard[row - 1][col - 1] == Boolean.FALSE) {
                    flipCell(row, col, bboard, m, n);
                    result += 1;
                }
            }
        Boolean flag = Boolean.TRUE;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                flag &= bboard[row][col];
            }
        }

        if (flag == Boolean.TRUE)
            return result;
        return Integer.MAX_VALUE;

    }

    boolean checkConstraint(int x, int y, int m, int n) {
        return (x >= 0 && y >= 0 && x < m && y < n);
    }

    void flipCell(int x, int y, Boolean[][] bboard, int m, int n) {

        int dx[] = new int[]{-1, 1, 0};
        int dy[] = new int[]{-1, 1, 0};
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                int u, v;
                u = x + dx[i];
                v = y + dy[j];
                if (checkConstraint(u, v, m, n))
                    bboard[u][v] ^= Boolean.TRUE;
            }
    }


    public int minTouch(String[] board) {
           /*Need somemore time to Understand */
        int m = 1 << (board.length);
        int n = 1 << (board[0].length());
        int result = Integer.MAX_VALUE;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                result = Math.min(result, touchDown(i, j, board));
            }
        if (result == Integer.MAX_VALUE)
            result = -1;
        return result;
    }

}