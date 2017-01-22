import org.junit.Test;
import static org.junit.Assert.*;

public class GetToTheTopTest {
	
	@Test(timeout=2000)
	public void test0() {
		int K = 2;
		int[] sweets = new int[] {1, 2, 3, 4, 3, 5};
		int[] x = new int[] {1, 1, 1, 4, 5, 5};
		int[] y = new int[] {1, 3, 4, 1, 2, 3};
		int[] stairLength = new int[] {2, 1, 1, 2, 1, 1};
		assertEquals(13, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int K = 4;
		int[] sweets = new int[] {2, 8, 7, 4, 1, 4, 7, 5, 11, 4};
		int[] x = new int[] {2, 9, 4, 6, 10, 5, 2, 8, 1, 10};
		int[] y = new int[] {1, 1, 3, 3, 3, 5, 6, 6, 8, 9};
		int[] stairLength = new int[] {2, 2, 1, 2, 2, 2, 4, 3, 2, 2};
		assertEquals(47, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int K = 10;
		int[] sweets = new int[] {1, 3, 5, 7};
		int[] x = new int[] {1, 6, 2, 8};
		int[] y = new int[] {2, 4, 1, 2};
		int[] stairLength = new int[] {4, 1, 7, 4};
		assertEquals(16, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int K = 3;
		int[] sweets = new int[] {80, 20, 15, 13, 10, 7, 8, 9, 1, 4, 3, 15, 14, 19, 22, 12, 6, 15, 10, 30, 1, 1};
		int[] x = new int[] {2, 8, 11, 17, 20, 14, 10, 16, 8, 14, 19, 6, 6, 6, 6, 15, 15, 15, 14, 20, 20, 20};
		int[] y = new int[] {1, 2, 3, 2, 1, 4, 6, 7, 8, 8, 8, 9, 10, 11, 12, 9, 10, 11, 12, 9, 10, 11};
		int[] stairLength = new int[] {2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
		assertEquals(129, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int K = 10;
		int[] sweets = new int[] {0, 10, 11, 2, 0};
		int[] x = new int[] {1, 26, 29, 22, 3};
		int[] y = new int[] {1, 83, 88, 22, 5};
		int[] stairLength = new int[] {11, 1, 23, 15, 8};
		assertEquals(0, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}
	
	@Test(timeout=2000)
	public void test5() {
		int K = 5;
		int[] sweets = new int[] {2, 0, 5};
		int[] x = new int[] {1, 8, 9};
		int[] y = new int[] {6, 6, 1};
		int[] stairLength = new int[] {3, 6, 3};
		assertEquals(7, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}

	@Test(timeout=2000)
	public void test6() {
		int K = 2;
		int[] sweets = new int[] {2, 9, 9, 1, 9, 9, 8};
		int[] x = new int[] {10, 8, 6, 6, 8, 7, 3};
		int[] y = new int[] {6, 7, 5, 4, 5, 2, 5};
		int[] stairLength = new int[] {1, 1, 1, 1, 1, 1, 1};
		assertEquals(47, new GetToTheTop().collectSweets(K, sweets, x, y, stairLength));
	}

}
