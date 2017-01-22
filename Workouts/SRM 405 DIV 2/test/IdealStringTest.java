import org.junit.Test;
import static org.junit.Assert.*;

public class IdealStringTest {
	
	@Test(timeout=2000)
	public void test0() {
		int length = 1;
		assertEquals("A", new IdealString().construct(length));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int length = 3;
		assertEquals("ABB", new IdealString().construct(length));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int length = 2;
		assertEquals("", new IdealString().construct(length));
	}
	
	@Test(timeout=2000)
	public void test3() {
		int length = 6;
		assertEquals("ABCBCC", new IdealString().construct(length));
	}
	
	@Test(timeout=2000)
	public void test4() {
		int length = 7;
		assertEquals("ABBCCCC", new IdealString().construct(length));
	}
	
	@Test(timeout=2000)
	public void test5() {
		int length = 12;
		assertEquals("", new IdealString().construct(length));
	}
}
