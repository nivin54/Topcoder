import org.junit.Test;
import static org.junit.Assert.*;

public class GeometricProgressionsTest {
	
	@Test(timeout=2000)
	public void test0() {
		int b1 = 3;
		int q1 = 2;
		int n1 = 5;
		int b2 = 6;
		int q2 = 2;
		int n2 = 5;
		assertEquals(6, new GeometricProgressions().count(b1, q1, n1, b2, q2, n2));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int b1 = 3;
		int q1 = 2;
		int n1 = 5;
		int b2 = 2;
		int q2 = 3;
		int n2 = 5;
		assertEquals(9, new GeometricProgressions().count(b1, q1, n1, b2, q2, n2));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int b1 = 1;
		int q1 = 1;
		int n1 = 1;
		int b2 = 0;
		int q2 = 0;
		int n2 = 1;
		assertEquals(2, new GeometricProgressions().count(b1, q1, n1, b2, q2, n2));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int b1 = 3;
		int q1 = 4;
		int n1 = 100500;
		int b2 = 48;
		int q2 = 1024;
		int n2 = 1000;
		assertEquals(100500, new GeometricProgressions().count(b1, q1, n1, b2, q2, n2));
	}
}
