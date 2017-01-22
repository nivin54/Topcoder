import java.util.*;
import java.math.*;
import static java.lang.Math.*;

public class UpDownHiking {
	
	public int maxHeight(int N, int A, int B) {
		int M = 0;
		for(int i = 1 ;i < N ; i++)
		{
			int b = i * A;
			int c = (N - i) * B;
			M = Math.max(M, Math.min(b,c ));
		}
		return M;
	}
}
