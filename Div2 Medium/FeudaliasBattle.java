
import java.util.*;

public class FeudaliasBattle {

    public double getMinimumTime(int[] baseX, int[] baseY, int[] siloX, int[] siloY, int takeOffTime, int rechargeTime, int missileSpeed) {
        double[][] sb = new double[4][4];
        double tt, re, ss;
        tt = takeOffTime / 60.0;
        re = rechargeTime;
        ss = missileSpeed;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                double x, y;
                x = baseX[j] - siloX[i];
                y = baseY[j] - siloY[i];
                sb[i][j] = Math.sqrt(x * x + y * y) / ss;
            }
        }
        double res = Math.min(Math.max(sb[0][1] + tt, sb[1][0] + tt), Math.max(sb[0][0] + tt, sb[1][1] + tt));
        res = Math.min(res, Math.max(tt * 2 + re + sb[0][1], tt + sb[0][0]));
        res = Math.min(res, Math.max(tt * 2 + re + sb[0][0], tt + sb[0][1]));
        res = Math.min(res, Math.max(tt * 2 + re + sb[1][1], tt + sb[1][0]));
        res = Math.min(res, Math.max(tt * 2 + re + sb[1][0], tt + sb[1][1]));
        return res;


    }
}

