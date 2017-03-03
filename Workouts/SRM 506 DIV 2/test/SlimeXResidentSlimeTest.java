import org.junit.Test;
import static org.junit.Assert.*;

public class SlimeXResidentSlimeTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] field = new String[] 
{
"#1$",
".2."};
		assertEquals(3, new SlimeXResidentSlime().exterminate(field));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] field = new String[] {
"$",
"1",
"1"};
		assertEquals(-1, new SlimeXResidentSlime().exterminate(field));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] field = new String[] {
"$124"};
		assertEquals(5, new SlimeXResidentSlime().exterminate(field));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] field = new String[] {"$.#2"
,"#..1"};
		assertEquals(6, new SlimeXResidentSlime().exterminate(field));
	}
}
