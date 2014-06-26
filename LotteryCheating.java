import java.util.*;

public class LotteryCheating {
	public int minimalChange(String ID) {
		int[] digit = new int[10];
		int M = 2343;
		int d = ID.length();
		for (int i = 0; i < 100000; i += 1) {
			long res = (long) i * (long) i;
			for (int j = 0; j < d; j += 1) {
				digit[d - j - 1] = (int) (res % 10);
				res /= 10;

			}
			if (res == 0) {
				int aux = 0;
				for (int j = 0; j < d; j += 1) {
					if (digit[j] != (int) (ID.charAt(j) - '0'))
						aux += 1;
				}
				M = Math.min(aux, M);
			}

		}
		return M;

	}

}
