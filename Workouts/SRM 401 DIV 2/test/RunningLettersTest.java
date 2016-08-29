import org.junit.Test;
import static org.junit.Assert.*;

public class RunningLettersTest {
	
	@Test(timeout=2000)
	public void test0() {
		String[] running = new String[] {"3 abc 1 ab"};
		assertEquals(3, new RunningLetters().newsLength(running));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String[] running = new String[] {"1 babaaba"};
		assertEquals(5, new RunningLetters().newsLength(running));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String[] running = new String[] {"1 ba 1 c 1 bacba 3 cba"};
		assertEquals(3, new RunningLetters().newsLength(running));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String[] running = new String[] {"42 runningletters 42 runningletters 1 running"};
		assertEquals(14, new RunningLetters().newsLength(running));
	}
	
	@Test(timeout=2000)
	public void test4() {
		String[] running = new String[] {"1 b ", "1 a ", "1 b ", "1 a", " 1 b"};
		assertEquals(2, new RunningLetters().newsLength(running));
	}
}
