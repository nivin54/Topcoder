import java.util.*;

public class FactoVisors {

    public int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b,  a%b);
    }

    public int lcm(int a, int b) {
        return (a / gcd(a, b) * b);
    }

    public int getNum(int[] divisors, int[] multiples) {
        int lc = 1;
        for (int i = 0; i < divisors.length; i++) {
            lc = lcm(lc, divisors[i]);
        }
        int gc = multiples[0];
        for (int i = 0; i < multiples.length; i++) {
            gc = gcd(gc, multiples[i]);
        }
	
        if (gc % lc != 0) {
            return 0;
        }
        int d = gc / lc, res = 0;
        for (int i = 1; i * i <= d; i++) {
		if(d%i==0)
            res = res + ((i * i == d) ? 1 : 2);
        }
        return res;


    }

    public static void main(String[] args) {
    }
}

