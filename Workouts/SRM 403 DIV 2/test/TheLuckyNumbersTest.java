import org.junit.Test;
import static org.junit.Assert.*;

public class TheLuckyNumbersTest {
	
	@Test(timeout=2000)
	public void test0() {
		int a = 1;
		int b = 10;
		assertEquals(2, new TheLuckyNumbers().count(a, b));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int a = 11;
		int b = 20;
		assertEquals(0, new TheLuckyNumbers().count(a, b));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int a = 74;
		int b = 77;
		assertEquals(2, new TheLuckyNumbers().count(a, b));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int a = 1000000;
		int b = 5000000;
		assertEquals(64, new TheLuckyNumbers().count(a, b));
	}
}
