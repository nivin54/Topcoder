// END CUT HERE
import java.util.*;

public class PaperAndPaintEasy {

    public long computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2) {
        long total = (long) width * (long) height;
        long sx, squares;
        if (2 * xfold > width) {
            sx = width - xfold;
        } else {
            sx = xfold;
        }
        squares = (cnt + 1);
        long totalpaint = 0;
        if (x2 <= sx) {
            totalpaint = (long) (x2 - x1) * (long) (y2 - y1) * (long) squares * 2;
        } else if (x1 >= sx) {
            totalpaint = (long) (x2 - x1) * (long) (y2 - y1) * (long) squares;
        } else {
            totalpaint = (long) (sx - x1) * (long) (y2 - y1) * (long) squares * 2 + (long) (x2 - sx) * (long) (y2 - y1) * (long) squares;
        }
        return total - totalpaint;
    }
}

