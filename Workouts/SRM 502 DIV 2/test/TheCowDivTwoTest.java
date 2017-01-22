import org.junit.Test;
import static org.junit.Assert.*;

public class TheCowDivTwoTest {
	
	@Test(timeout=2000)
	public void test0() {
		int N = 7;
		int K = 4;
		assertEquals(5, new TheCowDivTwo().find(N, K));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int N = 1;
		int K = 1;
		assertEquals(1, new TheCowDivTwo().find(N, K));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int N = 58;
		int K = 4;
		assertEquals(7322, new TheCowDivTwo().find(N, K));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int N = 502;
		int K = 7;
		assertEquals(704466492, new TheCowDivTwo().find(N, K));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int N = 1000;
		int K = 47;
		assertEquals(219736903, new TheCowDivTwo().find(N, K));
	}
}
