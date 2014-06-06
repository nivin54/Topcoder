
import java.util.*;

public class PrimeSoccer {

    public double getProbability(int skillOfTeamA, int skillOfTeamB) {
        int[][] C = new int[20][20];
        int[] P = new int[]{2, 3, 5, 7, 11, 13, 17};
        C[0][0] = 1;
        for (int i = 1; i <= 18; i++) 
        {
            C[i][0]=1;
            for (int j = 1; j <= i; j++) {
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
            }
        }
        double a = skillOfTeamA / 100.00;
        double b = skillOfTeamB / 100.00;
        double ansa = 0.0, ansb = 0.0;
        for (int i = 0; i < 7; i++) {
            ansa += fo(P[i], b, C[18][P[i]]);
            ansb += fo(P[i], a, C[18][P[i]]);
        }
        return ansa+ansb-ansa*ansb;
    }

    double fo(double a, double b, double c) {
        return Math.pow(b, a) * Math.pow((1 - b), 18 - a) * c;

    }
};

