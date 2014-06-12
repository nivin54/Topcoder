// END CUT HERE
import java.util.*;
public class NumericalPerfectionLevel {
	public int getLevel(long N) 
        {
            int cnt=0;
		for(long i=2;i*i <= N; i++)
		{
			while (N % i == 0 )
			{
					++cnt;
					N /= i;
			}
		}
		if( N > 1) 
				cnt++;
		int res = 0;
		while (cnt >= 4 )
		{
			++res;			
			cnt /= 4;
		}
		return res;		
		
	}
	
}

