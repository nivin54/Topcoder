import org.junit.Test;
import static org.junit.Assert.*;

public class RectangleAreaTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] known = new String[] {"NN",
 "NN"};
		assertEquals(3, new RectangleArea().minimumQueries(known));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] known = new String[] {"YNY",
 "NYN",
 "YNY"};
		assertEquals(1, new RectangleArea().minimumQueries(known));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] known = new String[] {"YY",
 "YY",
 "YY",
 "YY"};
		assertEquals(0, new RectangleArea().minimumQueries(known));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] known = new String[] {"NNNNNNNNNN"};
		assertEquals(10, new RectangleArea().minimumQueries(known));
	}
	
	@Test(timeout=2000)
	public void test4() {
		String[] known = new String[] {"NNYYYNN",
 "NNNNNYN",
 "YYNNNNY",
 "NNNYNNN",
 "YYNNNNY"};
		assertEquals(2, new RectangleArea().minimumQueries(known));
	}
}
