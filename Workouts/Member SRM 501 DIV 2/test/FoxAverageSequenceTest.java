import org.junit.Test;
import static org.junit.Assert.*;

public class FoxAverageSequenceTest {
	
	@Test(timeout=2000)
	public void test0() {
		int[] seq = new int[] {3, -1};
		assertEquals(4, new FoxAverageSequence().theCount(seq));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int[] seq = new int[] {5, 3, -1};
		assertEquals(2, new FoxAverageSequence().theCount(seq));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int[] seq = new int[] {-1, 0, 40};
		assertEquals(0, new FoxAverageSequence().theCount(seq));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int[] seq = new int[] {-1, 40, -1, -1, -1, 10, -1, -1, -1, 21, -1};
		assertEquals(579347890, new FoxAverageSequence().theCount(seq));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int[] seq = new int[] {-1, 12, 25, 0, 18, -1};
		assertEquals(58, new FoxAverageSequence().theCount(seq));
	}
}
