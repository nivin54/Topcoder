import org.junit.Test;
import static org.junit.Assert.*;

public class ConsecutiveNumbersTest {
	
	@Test(timeout=2000)
	public void test0() {
		int[] numbers = new int[] {10,7,12,8,11};
		assertArrayEquals(new int[] {9 }, new ConsecutiveNumbers().missingNumber(numbers));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int[] numbers = new int[] {3,6};
		assertArrayEquals(new int[] { }, new ConsecutiveNumbers().missingNumber(numbers));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int[] numbers = new int[] {5,6,7,8};
		assertArrayEquals(new int[] {4, 9 }, new ConsecutiveNumbers().missingNumber(numbers));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int[] numbers = new int[] {1000000000};
		assertArrayEquals(new int[] {999999999, 1000000001 }, new ConsecutiveNumbers().missingNumber(numbers));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int[] numbers = new int[] {1,6,9,3,8,12,7,4,11,5,10};
		assertArrayEquals(new int[] {2 }, new ConsecutiveNumbers().missingNumber(numbers));
	}
	
	@Test(timeout=2000)
	public void test5() {
		int[] numbers = new int[] {1};
		assertArrayEquals(new int[] {2 }, new ConsecutiveNumbers().missingNumber(numbers));
	}
}
