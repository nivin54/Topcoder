import org.junit.Test;
import static org.junit.Assert.*;

public class RevealTriangleTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] questionMarkTriangle = new String[] {"4??", 
 "?2", 
 "1"};
		assertArrayEquals(new String[] {"457", "92", "1" }, new RevealTriangle().calcTriangle(questionMarkTriangle));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] questionMarkTriangle = new String[] {"1"};
		assertArrayEquals(new String[] {"1" }, new RevealTriangle().calcTriangle(questionMarkTriangle));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] questionMarkTriangle = new String[] {"???2", "??2", "?2", "2"};
		assertArrayEquals(new String[] {"0002", "002", "02", "2" }, new RevealTriangle().calcTriangle(questionMarkTriangle));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] questionMarkTriangle = new String[] {"??5?", "??9", "?4", "6"};
		assertArrayEquals(new String[] {"7054", "759", "24", "6" }, new RevealTriangle().calcTriangle(questionMarkTriangle));
	}
}
