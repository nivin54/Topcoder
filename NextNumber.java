
// END CUT HERE
import java.util.*;
public class NextNumber {
	public int getNextNumber(int N) 
        {
            int a=N&~(N-1);
            int b=N+a;
            int c=~b&N;
            while((c&1)!=1) c>>=1;
            c >>=1;
            int d= b|c;
            return d;
		
	}
}

