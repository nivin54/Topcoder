// END CUT HERE
import java.util.*;

public class MazeWanderingEasy {

    String[] graph;
    int[][] visit;
    int res, len, row, column;

    int isgood(int x, int y) {
        if (x < 0 || y < 0 || x >= row || y >= column || graph[x].charAt(y) == 'X' || visit[x][y] == 1) {
            return 0;
        }

        return 1;
    }

    int dfs(int x, int y) {
        if (isgood(x, y) == 0) {
            return 0;
        }
        visit[x][y] = 1;
        if (graph[x].charAt(y) == '*') {
            return 1000000;
        }
        int decision = 0, res = 1;
        int[][] xy = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for (int i = 0; i < 4; i++) {
            int X, Y;
            X = x + xy[i][0];
            Y = y + xy[i][1];
            int aux = dfs(X, Y);
            if (aux > 0) {
                decision++;
                res = Math.max(res, aux);
            }
        }
        if (decision > 1) {
            res++;
        }
        return res;

    }

    public int decisions(String[] maze) {
        graph = maze;
        row = maze.length;
        column = maze[0].length();
        visit=new int [66][66];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (maze[i].charAt(j) == 'M') {
                    res = dfs(i, j);
                }
            }
        }      
        return res-1000000;
    }
}

