
import java.util.*;

public class Underprimes {

    public int howMany(int A, int B) {
        int[] prime = new int[100005];
        for (int i = 2; i <= B; i++) {
            prime[i]=1;
                for (int j = 2; j*j <= i; j++) {
                    
                    if (i % j == 0) {
                        prime[i] = prime[i / j] + 1;
                        break;
                    }}
                    System.out.println(prime[i]+" "+i);
                
        }
        int cnt = 0;
        for (int i = A; i <= B; i++) {
            if (prime[prime[i]] == 1) {
                cnt++;
            }
        }
        return cnt;
    }
}

