import org.junit.Test;
import static org.junit.Assert.*;

public class LightedPanelsTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] board = new String[] {"*****",
 "*...*",
 "*...*",
 "*...*",
 "*****"};
		assertEquals(1, new LightedPanels().minTouch(board));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] board = new String[] {".*"};
		assertEquals(-1, new LightedPanels().minTouch(board));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] board = new String[] {"**.",
 "**.",
 "..."};
		assertEquals(2, new LightedPanels().minTouch(board));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] board = new String[] {"*...",
 "**..",
 "..**",
 "...*"};
		assertEquals(10, new LightedPanels().minTouch(board));
	}
}
