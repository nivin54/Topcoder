// END CUT HERE
import java.util.*;

public class CubeWalking {

    private final static int[] dx = {-1, 0, 1, 0};
    private final static int[] dy = {0, 1, 0, -1};
    private final static String[] grid = {"RBR", "BGB", "RBR"};

    public String finalPosition(String movement) {
        int x, y, d;
        x = y = 1;
        d = 0;
        for (int i = 0; i < movement.length(); ++i) {
            if (movement.charAt(i) == 'W') {
                x += dx[d];
                y += dy[d];
                x = (x + 3) % 3;
                y = (y + 3) % 3;
            } else if (movement.charAt(i) == 'L') {
                d = (d - 1 + 4) % 4;
            } else {
                d = (d + 1) % 4;
            }

        }
        if (grid[x].charAt(y) == 'R') {
            return "RED";
        }
        if (grid[x].charAt(y) == 'G') {
            return "GREEN";
        }
        if (grid[x].charAt(y) == 'B') {
            return "BLUE";
        }
        return "";
    }
}

