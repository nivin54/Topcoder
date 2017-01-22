import org.junit.Test;
import static org.junit.Assert.*;

public class PolygonColorsTest {
	
	@Test(timeout=2000)
	public void test0() {
		int N = 3;
		int[] colors = new int[] {1, 2, 0};
		assertEquals(1, new PolygonColors().getWays(N, colors));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int N = 4;
		int[] colors = new int[] {1, 2, 3, 0};
		assertEquals(3, new PolygonColors().getWays(N, colors));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int N = 5;
		int[] colors = new int[] {0, 1, 1, 1, 1};
		assertEquals(0, new PolygonColors().getWays(N, colors));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int N = 16;
		int[] colors = new int[] {0,1,2,6,4,5,6,7,1,9,10,11,12,13,14,10};
		assertEquals(96791474, new PolygonColors().getWays(N, colors));
	}
}
