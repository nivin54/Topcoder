import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class RelativePath {

    public String makeRelative(String path, String currentDir) {

        int i = 0, j = 0, n, m;
        String pathToken[] = path.split("/");
        String currentDirToken[] = currentDir.split("/");
        n = pathToken.length;
        m = currentDirToken.length;
        while (i < n && j < m) {
            if (!pathToken[i].equals(currentDirToken[j]))
                break;
            i++;
            j++;
        }
        int fill = m - i;
        String result = "";
        while (fill > 0) {
            result += "../";
            fill--;
        }
        while (j < n) {
            if (pathToken[j].isEmpty()) {
                j++;
                continue;
            }
            result = result + pathToken[j];
            j++;
            if (j < n)
                result += '/';
        }

        return result;
    }
}
