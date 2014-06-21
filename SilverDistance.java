import java.util.*;

public class SilverDistance {
	public int minSteps(int sx, int sy, int gx, int gy) {
		int res = 0;
		if ((Math.abs(sx - gx) + Math.abs(sy - gy)) % 2 == 1) {
			res += 1;
			sy++;
		}
		res += Math.max(Math.abs(sx - gx), Math.abs(gy - sy));
		return res;

	}

}
