

import java.util.*;

public class ConsecutiveNumbers {

    public int[] missingNumber(int[] numbers) {
        Arrays.sort(numbers);
        int status = 0, key = 0;
        List<Integer> res = new ArrayList<Integer>();
        for (int i = 0; i < numbers.length - 1; i++) {
            if (numbers[i] + 1 != numbers[i+1] && numbers[i] != numbers[i + 1]) {
                status = status + numbers[i + 1] - (numbers[i] + 1);
                key = numbers[i] + 1;
            } else if (numbers[i] == numbers[i + 1]) {
                return new int[]{};
            }
        }
        if (status == 0) {
            if (numbers[0] - 1 > 0) {
                return new int[]{numbers[0] - 1, numbers[numbers.length - 1] + 1};

            }
	    return new int[]{numbers[numbers.length-1]+1};	
        }
        if (status == 1) {
            return new int[]{key};
        }

        return new int[]{};
    }
}

