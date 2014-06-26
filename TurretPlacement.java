import java.util.*;
public class TurretPlacement {
	
	public long count(int[] x, int[] y) 
	{
		long ans = 0;
		int len = x.length;
		for(int i = 0 ; i < len ; i ++ )
			for(int j = i + 1; j < len ; j ++)
			{
				long res = (long) (Math.sqrt( (x[i] - x[j]) * (x[i] - x[j])  + (y[i] - y[j]) * (y[i] - y[j]) ) * 2.0);
				ans += ((res)*(res - 1) / 2);
				
			}
		return ans;
		
	}
}
