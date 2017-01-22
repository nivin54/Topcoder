import org.junit.Test;
import static org.junit.Assert.*;

public class RelativePathTest {
	
	@Test(timeout=2000)
	public void test0() {
		String path = "/home/top/data/file";
		String currentDir = "/home/user/pictures";
		assertEquals("../../top/data/file", new RelativePath().makeRelative(path, currentDir));
	}
	
	@Test(timeout=2000)
	public void test1() {
		String path = "/home/user/movies/title";
		String currentDir = "/home/user/pictures";
		assertEquals("../movies/title", new RelativePath().makeRelative(path, currentDir));
	}
	
	@Test(timeout=2000)
	public void test2() {
		String path = "/file";
		String currentDir = "/";
		assertEquals("file", new RelativePath().makeRelative(path, currentDir));
	}
	
	@Test(timeout=2000)
	public void test3() {
		String path = "/a/b/a/b/a/b";
		String currentDir = "/a/b/a/a/b/a/b";
		assertEquals("../../../../b/a/b", new RelativePath().makeRelative(path, currentDir));
	}
	
	@Test(timeout=2000)
	public void test4() {
		String path = "/root/root/root";
		String currentDir = "/root";
		assertEquals("root/root", new RelativePath().makeRelative(path, currentDir));
	}
}
