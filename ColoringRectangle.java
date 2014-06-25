import java.util.*;

public class ColoringRectangle {
	List<Double> R, B;
	int nr, nb;
	double W, H;

	List<Double> populate(int[] array, int value) {
		int len = array.length;
		System.out.println(len + " " + value);
		List<Double> res = new ArrayList<Double>();
		for (int i = 0; i < len; ++i) {
			double R = array[i], h = H / 2.0, aux;
			R = (R * R / 4);
			aux = R - (h * h);
			if (aux < 0.0)
				continue;
			res.add(Math.sqrt(aux) * 2);
		}
		Collections.sort(res);
		Collections.reverse(res);
		if (value == 0)
			nr = res.size();
		else
			nb = res.size();
		return res;
	}

	int total(int toggle) {
		int i = 0, j = 0, step = 0;
		double res = 0;
		while (i < nr || j < nb) {
			if (toggle == 0 && i == nr)
				return 99999999;
			if (toggle == 1 && j == nb)
				return 99999999;
			if (toggle == 0) {
				res += R.get(i);
				i += 1;
			}
			if (toggle == 1) {
				res += B.get(j);
				j += 1;
			}
			step += 1;
			toggle ^= 1;
			if (res >= W)
				return step;

		}
		 return 99999999;
	}

	public int chooseDisks(int width, int height, int[] red, int[] blue) {

		W = width;
		H = height;
		R = populate(red, 0);
		B = populate(blue, 1);
		int res = Math.min(total(0), total(1));
		return res == 99999999 ? -1 : res;
	}
}
