import java.util.*;
import java.math.*;

import static java.lang.Math.*;

public class RandomSort {

    HashMap<Integer, Double> map = new HashMap<>();

    double f(int[] permutation_one) {
        int key = 0;
        for (int i = 0; i < permutation_one.length; i++)
            key = key * 8 + permutation_one[i]; //Similar to one key * 10 + value.
        if (map.get(key) != null)
            return map.get(key);
        else {
            int tot = 0;
            double result = 0.0;
            for (int i = 0; i < permutation_one.length; i++)
                for (int j = i + 1; j < permutation_one.length; j++) {
                    if (permutation_one[i] > permutation_one[j]) {

                        tot += 1;
                        int temp = permutation_one[i];
                        permutation_one[i] = permutation_one[j];
                        permutation_one[j] = temp;
                        result += f(permutation_one);
                        temp = permutation_one[i];
                        permutation_one[i] = permutation_one[j];
                        permutation_one[j] = temp;
                    }
                }
            if (tot != 0)
                result = result / tot + 1; // TODO: Need to understand the last line
            map.put(key, result);
            return result;

        }


    }

    public double getExpected(int[] permutation) {


        return f(permutation);
    }
}
