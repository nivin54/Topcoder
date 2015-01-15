
import java.util.*;

public class RelativePath {

    public String makeRelative(String path, String currentDir) {
        List<String> pathd = new ArrayList<String>();
        List<String> currentd = new ArrayList<String>();
        String res = "", word = "";
        for (int i = 1; i < path.length(); i++) {

            if (path.charAt(i) == '/') {
                pathd.add(word);
                word = "";
                continue;
            }
            word = word + (String.valueOf(path.charAt(i)));

        }
        if (word.length() > 0) {
            pathd.add(word);
        }
        word="";
        for (int i = 1; i < currentDir.length(); i++) {
            if (currentDir.charAt(i) == '/') {
                currentd.add(word);
                word = "";
                continue;
            }
            word = word + (String.valueOf(currentDir.charAt(i)));
        }

        if (word.length() > 0) {
            currentd.add(word);
        }
        
        word = "";
        int i, j;
        for (i = 0, j = 0; i < currentd.size() && j < pathd.size(); i++, j++) {
            System.out.println(pathd.get(j)+" "+currentd.get(i)+" "+pathd.get(j).equals(currentd.get(i)));
            if (pathd.get(j).equals( currentd.get(i))) {
                continue;
            }
            break;
        }
        for (; i < currentd.size(); i++) {
            res = res + "../";
        }
        for (; j < pathd.size(); j++) {
            res = res + pathd.get(j);
            if (j + 1 != pathd.size()) {
                res = res + "/";
            }
        }
        return res;
    }
}

