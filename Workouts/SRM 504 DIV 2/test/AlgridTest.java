import org.junit.Test;
import static org.junit.Assert.*;

public class AlgridTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] output = new String[] {"WWWWWWW",
 "WWWWWWB",
 "BBBBBWW"};
		assertArrayEquals(new String[] {"WWWWWWW", "WWWWWWB", "BBBBBBB" }, new Algrid().makeProgram(output));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] output = new String[] {"BBBBB",
 "WBWBW"};
		assertArrayEquals(new String[] {"BBBBB", "WWBWB" }, new Algrid().makeProgram(output));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] output = new String[] {"BBBB",
 "BBBB",
 "BBWB",
 "WWBB",
 "BWBB"};
		assertArrayEquals(new String[] { }, new Algrid().makeProgram(output));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] output = new String[] {"WWBBBBW",
 "BWBBWBB",
 "BWBBWBW",
 "BWWBWBB"};
		assertArrayEquals(new String[] {"WWBBBBW", "BBBBBWB", "BBBBBBB", "BBBWBBB" }, new Algrid().makeProgram(output));
	}
}
