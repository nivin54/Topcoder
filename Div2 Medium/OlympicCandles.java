
// END CUT HERE
import java.util.*;

public class OlympicCandles {

    public int numberOfNights(int[] candles) {
        List<Integer> PQ = new ArrayList<Integer>();
        for (int i = 0; i < candles.length; i++) {
            PQ.add(candles[i]);
        }

        Collections.sort(PQ, Collections.reverseOrder());
        System.out.println(PQ.get(0));
        int day = 1;
        for (;; day++) {
            int daycan = 0;
            List<Integer> candle = new ArrayList<Integer>();
            int idx = 0;
            while (idx < PQ.size() && PQ.get(idx) > 0 && daycan < day) {

                PQ.set(idx, PQ.get(idx) - 1);
                idx++;
                daycan++;

            }
            if (daycan < day) {
                return day - 1;
            }
            Collections.sort(PQ, Collections.reverseOrder());
        }

    }
}

