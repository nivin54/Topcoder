import org.junit.Test;
import static org.junit.Assert.*;

public class GrabbingTaxiTest {
	
	@Test(timeout=2000)
	public void test0() {
		int[] tXs = new int[] {};
		int[] tYs = new int[] {};
		int gX = 3;
		int gY = 2;
		int walkTime = 10;
		int taxiTime = 2;
		assertEquals(50, new GrabbingTaxi().minTime(tXs, tYs, gX, gY, walkTime, taxiTime));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int[] tXs = new int[] {-2, -2};
		int[] tYs = new int[] {0, -2};
		int gX = -4;
		int gY = -2;
		int walkTime = 15;
		int taxiTime = 3;
		assertEquals(42, new GrabbingTaxi().minTime(tXs, tYs, gX, gY, walkTime, taxiTime));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int[] tXs = new int[] {3};
		int[] tYs = new int[] {0};
		int gX = 5;
		int gY = 0;
		int walkTime = 10;
		int taxiTime = 20;
		assertEquals(50, new GrabbingTaxi().minTime(tXs, tYs, gX, gY, walkTime, taxiTime));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int[] tXs = new int[] {34, -12, 1, 0, 21, -43, -98, 11, 86, -31};
		int[] tYs = new int[] {11, 5, -68, 69, -78, -49, -36, -2, 1, 70};
		int gX = -97;
		int gY = -39;
		int walkTime = 47;
		int taxiTime = 13;
		assertEquals(2476, new GrabbingTaxi().minTime(tXs, tYs, gX, gY, walkTime, taxiTime));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int[] tXs = new int[] {82, -60, 57, 98, 30, -67, 84, -42, -100, 62};
		int[] tYs = new int[] {-7, 90, 53, -56, -15, -87, 22, -3, -61, -30};
		int gX = 21;
		int gY = 15;
		int walkTime = 53;
		int taxiTime = 2;
		assertEquals(1908, new GrabbingTaxi().minTime(tXs, tYs, gX, gY, walkTime, taxiTime));
	}
}
