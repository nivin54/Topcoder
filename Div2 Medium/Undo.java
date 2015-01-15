	
import java.util.*;

public class Undo {

    public int gettime(String aux) {
        int ans = 0;
        for (int i = 0; i < aux.length(); i++) {
            if (aux.charAt(i) >= '0' && aux.charAt(i) <= '9') {
                ans = ans * 10 + aux.charAt(i) - '0';
            }

        }
        return ans;
    }

    public String getText(String[] commands, int[] time) {
        int[] used = new int[commands.length + 1];
        Arrays.fill(used, 0);
        for (int i = commands.length - 1; i >= 0; i--) {
            if (used[i] == 1) {
                continue;
            }
            if (commands[i].charAt(0) == 'u') {
                int T = time[i] - gettime(commands[i]);
                for (int k = 0; k < i; k++) {
                    if (T <= time[k]) {
                        used[k] = 1;
                    }
                }

            }
        }
        String ret = "";
        for (int i = 0; i < commands.length; i++) {
            if (used[i] == 0 && commands[i].charAt(0) == 't') {
                ret+=(Character.toString(commands[i].charAt(5)));
            }

        }
        return ret;
    }
}

