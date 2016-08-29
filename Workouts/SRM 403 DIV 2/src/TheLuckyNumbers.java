import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class TheLuckyNumbers {

    public int count(int a, int b) {
        List<Long> list = new ArrayList<>();
        list.add(4L);
        list.add(7L);
        int count = 0;
        for (int i = 0; i < list.size() && list.get(i) <= b; i++) {
            Long number = list.get(i);
            list.add(number * 10L + 4L);
            list.add(number * 10L + 7L);
            if (number >= a)
                count++;

        }

        return count;
    }
}
