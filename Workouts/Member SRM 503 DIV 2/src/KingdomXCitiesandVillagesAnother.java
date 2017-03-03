import java.util.ArrayList;
import java.util.List;

public class KingdomXCitiesandVillagesAnother {


    class Point {
        int a, b;

        public Point(int a, int b) {
            this.a = a;
            this.b = b;
        }

        public int getA() {
            return a;
        }

        public int getB() {
            return b;
        }

    }

    public double determineLength(int[] cityX, int[] cityY, int[] villageX, int[] villageY) {
        List<Point> setA = new ArrayList<>();
        double result = 0.0;
        for (int i = 0; i < cityX.length; i++) // O(N)
            setA.add(new Point(cityX[i], cityY[i]));

        boolean[] visited = new boolean[villageX.length];
        for (int i = 0; i < villageX.length; i++) {
            double min_dist = Double.MAX_VALUE;
            int variable = -1;
            for (int j = 0; j < villageX.length; j++) {
                if (visited[j]) continue;
                for (int k = 0; k < setA.size(); k++) {
                    double aux_dist = euclidean(setA.get(k), villageX[j], villageY[j]);
                    if (aux_dist < min_dist) {
                        variable = j;
                        min_dist = aux_dist;
                    }
                }
            }
            result += min_dist;
            setA.add(new Point(villageX[variable], villageY[variable]));
            visited[variable] = true;
        }

        return result;
    }

    private double euclidean(Point point, int x, int y) {

        double x1 = point.getA() - x;
        double y1 = point.getB() - y;
        return Math.sqrt(x1 * x1 + y1 * y1);

    }
}
