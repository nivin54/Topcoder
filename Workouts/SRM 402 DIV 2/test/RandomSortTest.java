import org.junit.Test;
import static org.junit.Assert.*;

public class RandomSortTest {
	
	@Test(timeout=2000)
	public void test0() {
		int[] permutation = new int[] {1,3,2};
		assertEquals(1.0, new RandomSort().getExpected(permutation), 1e-9);
	}
	
	@Test(timeout=2000)
	public void test1() {
		int[] permutation = new int[] {4,3,2,1};
		assertEquals(4.066666666666666, new RandomSort().getExpected(permutation), 1e-9);
	}
	
	@Test(timeout=2000)
	public void test2() {
		int[] permutation = new int[] {1};
		assertEquals(0.0, new RandomSort().getExpected(permutation), 1e-9);
	}
	
	@Test(timeout=2000)
	public void test3() {
		int[] permutation = new int[] {2,5,1,6,3,4};
		assertEquals(5.666666666666666, new RandomSort().getExpected(permutation), 1e-9);
	}
}
