import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class ConsecutiveNumbers {

    public int[] missingNumber(int[] numbers) {
        Arrays.sort(numbers);
        int len = numbers.length;
        List<Integer> missing = new ArrayList<>();
        Boolean flag = false;
        Boolean visited = false;
        for (int i = 1; i < len; i++) {
            if (numbers[i - 1] + 1 != numbers[i]) {
                if (numbers[i - 1] + 2 == numbers[i] && visited == false) {
                    for (int j = numbers[i - 1] + 1; j < numbers[i]; j++)
                        missing.add(j);
                    visited = true;
                } else {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            return new int[]{};
        if (missing.size() == 0) {
            if (numbers[0] != 1)
                missing.add(numbers[0] - 1);
            missing.add(numbers[len - 1] + 1);
        }
        int[] result = new int[missing.size()];
        int i = 0;
        for (Integer each : missing) {
            result[i] = each.intValue();
            i++;
        }
        return result;
    }
}
