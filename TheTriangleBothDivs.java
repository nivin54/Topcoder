import java.util.*;

public class TheTriangleBothDivs {

	public String fix(String time) {
		String hrss = time.substring(0, 2);
		String mins = time.substring(3, 5).replace('?', '0');
		String of = time.substring(9, 11);

		Set<Integer> dig0 = digit(hrss.charAt(0));
		Set<Integer> dig1 = digit(hrss.charAt(1));
		Set<Integer> hr = new HashSet<Integer>();
		for (int ten : dig0) {
			for (int units : dig1) {
				int x = ten * 10 + units;
				if (x < 24) {
					hr.add(x);
				}
			}
		}
		Set<Integer> dig = digit(of.charAt(1));
		char sgn = of.charAt(0);
		Set<Integer> ofs = new HashSet<Integer>();
		for (int d : dig) {
			if (sgn == '-' && d == 0) {
				continue;
			}
			if (sgn == '?' || sgn == '-') {
				ofs.add(-d);
			}
			if (sgn == '?' || sgn == '+') {
				ofs.add(d);
			}
		}
		List<Integer> candidates = new ArrayList<Integer>();
		for (int h : hr) {
			for (int o : ofs) {
				int c = (h + 24 - o) % 24;
				candidates.add(c);
			}
		}
		Collections.sort(candidates);
		int h = candidates.get(0);
		String ret = String.format("02d:%s", h, mins);
		return ret;

	}

	private Set<Integer> digit(char c) {
		Set<Integer> res = new HashSet<Integer>();
		if (c == '?') {
			for (int i = 0; i < 10; i++) {
				res.add(i);
			}
		} else {
			res.add(c - '0');
		}
		return res;
	}
}
