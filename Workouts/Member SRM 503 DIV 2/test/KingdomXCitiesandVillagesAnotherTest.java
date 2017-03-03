import org.junit.Test;
import static org.junit.Assert.*;

public class KingdomXCitiesandVillagesAnotherTest {
	
	@Test(timeout=2000)
	public void test0() {
		int[] cityX = new int[] {1};
		int[] cityY = new int[] {1};
		int[] villageX = new int[] {2,3};
		int[] villageY = new int[] {1,1};
		assertEquals(2.0, new KingdomXCitiesandVillagesAnother().determineLength(cityX, cityY, villageX, villageY), 1e-9);
	}
	
	@Test(timeout=2000)
	public void test1() {
		int[] cityX = new int[] {1,2};
		int[] cityY = new int[] {1,1};
		int[] villageX = new int[] {1,2};
		int[] villageY = new int[] {2,2};
		assertEquals(2.0, new KingdomXCitiesandVillagesAnother().determineLength(cityX, cityY, villageX, villageY), 1e-9);
	}
	
	@Test(timeout=2000)
	public void test2() {
		int[] cityX = new int[] {0};
		int[] cityY = new int[] {0};
		int[] villageX = new int[] {2};
		int[] villageY = new int[] {2};
		assertEquals(2.8284271247461903, new KingdomXCitiesandVillagesAnother().determineLength(cityX, cityY, villageX, villageY), 1e-9);
	}
}
