import org.junit.Test;
import static org.junit.Assert.*;

public class FIELDDiagramsTest {
	
	@Test(timeout=2000)
	public void test0() {
		int fieldOrder = 2;
		assertEquals(4L, new FIELDDiagrams().countDiagrams(fieldOrder));
	}
	
	@Test(timeout=2000)
	public void test1() {
		int fieldOrder = 3;
		assertEquals(13L, new FIELDDiagrams().countDiagrams(fieldOrder));
	}
	
	@Test(timeout=2000)
	public void test2() {
		int fieldOrder = 5;
		assertEquals(131L, new FIELDDiagrams().countDiagrams(fieldOrder));
	}
}
