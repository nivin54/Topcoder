// END CUT HERE
import java.util.*;

public class KnightsTour {

    String[] boards;
    int[][] visit;

    boolean isgood(int x, int y, int dx, int dy) {
        int X = x + dx;
        int Y = y + dy;
        if (X < 0 || Y < 0 || X > 7 || Y > 7 || boards[X].charAt(Y) != '.' || visit[X][Y] == 1) {
            return false;
        }
        return true;
    }

    int findcost(int i, int j) {
        int[][] d = {{-1, -2}, {1, -2}, {-1, 2}, {1, 2}, {-2, -1}, {-2, 1}, {2, -1}, {2, 1}};
        int res = 0;
        for (int k = 0; k < 8; ++k) {
            int dx, dy;
            dx = d[k][0];
            dy = d[k][1];
            if (isgood(i, j, dx, dy)) {
                res += 1;
            }
        }
        return res;
    }

    public int visitedPositions(String[] board) {
        boards = board;
        visit = new int [8][8];
        int x = 0, y = 0, nx, ny, cost, res = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (boards[i].charAt(j) == 'K') {
                    x = i;
                    y = j;
                }
            }
        }
        int[][] d = {{-1, -2}, {1, -2}, {-1, 2}, {1, 2}, {-2, -1}, {-2, 1}, {2, -1}, {2, 1}};
        while (x != -1 && y != -1) {
            nx = -1;
            ny = -1;
            cost = 10000000;
            for (int k = 0; k < 8; ++k) {
                int dx = d[k][0], dy = d[k][1];
                int X = dx + x, Y = dy + y, tcost;
                if (isgood(x, y, dx, dy)) {
                    tcost = findcost(X, Y);
                    if (cost > tcost) {
                        nx = X;
                        ny = Y;
                        cost = tcost;
                    } else if (cost == tcost) {
                        if (nx > X) {
                            nx = X;
                            ny = Y;
                        } else if (nx == X && ny > Y) {
                            nx = X;
                            ny = Y;
                        }
                    }

                }
            }
            visit[x][y] = 1;
            x = nx;
            y = ny;
            res += 1;
        }
        return res;
    }
}

