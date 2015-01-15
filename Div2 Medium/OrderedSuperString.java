
import java.util.*;

public class OrderedSuperString {

    public int getLength(String[] words) {
        String superString = "";
        int last = 0;
        for (String w : words) {
            for (int i = last; i <= superString.length(); i++) {  //checking all positions
                int common = Math.min(superString.length() - i, w.length());  //length of the overlapping part
                String a = superString.substring(i, i + common);
                String b = w.substring(0, common);
                if (a.equals(b)) {  //match found
                    superString += w.substring(common);
                    last = i;
                    break;
                }
            }
        }
        return superString.length();
    }
}

