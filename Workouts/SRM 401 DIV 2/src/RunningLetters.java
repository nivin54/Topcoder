import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class RunningLetters {

    public int newsLength(String[] running) {
        String result = "";
        String ques = "";
        for (int i = 0; i < running.length; i++) {
            ques += running[i];
        }
        String[] run = ques.split(" ");
        for (int i = 0; i < run.length; i += 2) {
            int ctimes = Integer.parseInt(run[i]);
            for (int j = 0; j < ctimes; j++)
                result += run[i + 1];
        }
        int[] F = new int[result.length() + 5];
        F[0] = -1;
        int i = 0, j = -1, n;
        n = result.length();
        while (i < n) {
            while (j >= 0 && result.charAt(i) != result.charAt(j))
                j = F[j];
            j++;
            i++;
            F[i] = j;
        }


        return n - F[n]; //TODO: Understanding why it's n - F[n] and not n - {Small value}.

    }

}
