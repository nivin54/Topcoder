import org.junit.Test;
import static org.junit.Assert.*;

public class StrongPrimePowerTest {
	
	@Test(timeout=2000)
	public void test0() {
		String n = "27";
		assertArrayEquals(new int[] {3, 3 }, new StrongPrimePower().baseAndExponent(n));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String n = "10";
		assertArrayEquals(new int[] { }, new StrongPrimePower().baseAndExponent(n));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String n = "7";
		assertArrayEquals(new int[] { }, new StrongPrimePower().baseAndExponent(n));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String n = "1296";
		assertArrayEquals(new int[] { }, new StrongPrimePower().baseAndExponent(n));
	}
	
	@Test(timeout=2000)
	public void test4() {
		String n = "576460752303423488";
		assertArrayEquals(new int[] {2, 59 }, new StrongPrimePower().baseAndExponent(n));
	}
	
	@Test(timeout=2000)
	public void test5() {
		String n = "999999874000003969";
		assertArrayEquals(new int[] {999999937, 2 }, new StrongPrimePower().baseAndExponent(n));
	}
}
