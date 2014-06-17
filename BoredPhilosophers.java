
import java.util.*;

public class BoredPhilosophers {

    public int[] simulate(String[] text, int N) {
        String whole = "";
        for (String onetext : text) {
            whole += onetext;
        }
        String[] words = whole.split(" ");
        int[] result = new int[N];
        for (int consecutive = 1; consecutive <= N; ++consecutive) {
            HashMap hm = new HashMap();
            for (int i = 0; i + consecutive <= words.length; ++i) {
                String wtext = "";
                for (int j = 0; j < consecutive; j++) {
                    
                    wtext += words[ j + i];
                }
                hm.put(wtext, new Integer(5));
            }
            result[(consecutive - 1)] = hm.size();
            System.out.println(result[consecutive - 1]);
        }
        return result;
    }
}

