import java.util.*;

public class RabbitNumbering {
	public int theCount(int[] maxNumber) {
		Arrays.sort(maxNumber);
		long res = 1;
		for (int i = 0; i < maxNumber.length; i += 1) {
			long aux = maxNumber[i] - i;
			if (aux <= 0)
				return 0;
			res = (res * aux) % 1000000007;

		}
		return (int) res;
	}

}
