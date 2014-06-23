// END CUT HERE

import java.util.*;

public class Inequalities {

	public int maximumSubset(String[] inequalities) {
		int len = inequalities.length;
		int res = 0;
		for (double nn = -1; nn <= 1001; nn += 0.5) {
			int ma = 0;
			for (int i = 0; i < len; i += 1) {
				String s[] = inequalities[i].split(" ");
				double con = (double) Integer.parseInt(s[2]);
				ma += ((s[1].equals("<")) ? ((nn < con) ? 1 : 0) : 0);
				ma += ((s[1].equals("<=")) ? ((nn <= con) ? 1 : 0) : 0);
				ma += ((s[1].equals(">")) ? ((nn > con) ? 1 : 0) : 0);
				ma += ((s[1].equals(">=")) ? ((nn >= con) ? 1 : 0) : 0);
				ma += ((s[1].equals("=")) ? ((nn == con) ? 1 : 0) : 0);
			}

			res = Math.max(res, ma);
		}
		return res;
	}
}
