
import java.util.*;

public class FindingSquareInTable {

    public int findMaximalSquare(String[] table) {

        int row, column, res = -1;
        row = table.length;
        column = table[0].length();
        for (int x = 0; x < row; x++) {
            for (int y = 0; y < column; y++) {
                for (int dx = 0; dx < row; dx++) {
                    for (int dy = 0; dy < column; dy++) {

                        int[][] dd = {{1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
                        for (int i = 0; i < 4; i++) {
                            int X, Y;
                            X = x;
                            Y = y;
                            int number = 0;
                            while (!(X < 0 || Y < 0 || Y >= column || X >= row)) {
                                number = number * 10 + (int) (table[X].charAt(Y) - '0');
                                int sq = (int) Math.round(Math.sqrt(number));
                                if (sq * sq == number) {
                                    res = Math.max(res, number);
                                }

                                if (dx == 0 && dx == dy) {
                                    break;
                                }

                                X += dx * dd[i][0];
                                Y += dy * dd[i][1];
                            }
                        }
                    }
                }
            }
        }
        return res;


    }
}

