import org.junit.Test;
import static org.junit.Assert.*;

public class TheSumOfLuckyNumbersTest {
	
	@Test(timeout=2000)
	public void test0() {
		int n = 11;
		assertArrayEquals(new int[] {4, 7 }, new TheSumOfLuckyNumbers().sum(n));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int n = 12;
		assertArrayEquals(new int[] {4, 4, 4 }, new TheSumOfLuckyNumbers().sum(n));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int n = 13;
		assertArrayEquals(new int[] { }, new TheSumOfLuckyNumbers().sum(n));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int n = 100;
		assertArrayEquals(new int[] {4, 4, 4, 44, 44 }, new TheSumOfLuckyNumbers().sum(n));
	}
}
