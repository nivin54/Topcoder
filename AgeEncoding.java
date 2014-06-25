
import java.util.*;

public class AgeEncoding {

    String candle;
    double ag;
    
    double check(double aux) {
        double res = 0.0;
        for (int i = 0; i < candle.length(); i++) {
            res += Math.pow(aux, i) * ((double) (candle.charAt(i) - '0'));
            if (res > ag) {
                return res;
            }
           // System.out.println(res);
        }
        return res;
    }

    double findmi() {
        double lo, hi;
        lo = 0;
        hi = 100;

        
        if (candle.charAt(0) == '1' && ag == 1) {
            if (candle.equals("1")) {
                return -2.0;
            }
            return -1.0;
        }
        for (int iter = 0; iter < 500; iter++) {
            double mid = (lo + hi) / 2.0;
            if (check(mid) > ag) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        if (Math.abs(check(lo) - ag) <= 0.0000000001) {
            return lo;
        }
        return -1.0;
    }

    public double getRadix(int age, String candlesLine) {
        while (candlesLine.length() > 0 && candlesLine.charAt(0) == '0') 
            candlesLine = candlesLine.substring(1);
        ag = age;
        int len = candlesLine.length();        
        char cc[] = candlesLine.toCharArray();
        System.out.println("Length" + cc.length);
        for(int  i = 0 ; i < cc.length / 2 ; i += 1 )
        {
        	char tm = cc[i];
        	cc[i] = cc[len - 1 -i];
        	cc[len -1 -i] = tm;
        }
        candle = String.valueOf(cc);
        if(candle.length() == 0)
        		return -1.0;
        return findmi();
    }
}
