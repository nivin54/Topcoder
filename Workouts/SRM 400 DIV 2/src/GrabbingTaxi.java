import java.util.*;
import java.math.*;
import static java.lang.Math.*;

public class GrabbingTaxi {

	public int minTime(int[] tXs, int[] tYs, int gX, int gY, int walkTime, int taxiTime) {
		int minmum = (Math.abs(gX) + Math.abs(gY)) * walkTime;
		System.out.println(minmum + gX);
		for (int i = 0; i < tXs.length; i++)
			minmum = Math.min(minmum, (((Math.abs(tXs[i]) + Math.abs(tYs[i])) *  walkTime)+ (Math.abs(tXs[i] - gX) + Math.abs(tYs[i] - gY)) * taxiTime));
		return minmum;
	}
}

