
import java.util.*;

public class YearProgressbar {

    public double percentage(String currentDate) {
        int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        double tmin = 60 * 24 * 365;
        Map<String, Integer> map = new HashMap<String, Integer>();
        map.put("January", 0);
        map.put("February", 1);
        map.put("March", 2);
        map.put("April", 3);
        map.put("May", 4);
        map.put("June", 5);
        map.put("July", 6);
        map.put("August", 7);
        map.put("September", 8);
        map.put("October", 9);
        map.put("November", 10);
        map.put("December", 11);
        StringTokenizer st = new StringTokenizer(currentDate, ", :");
        int month = map.get(st.nextToken());
        int day = Integer.parseInt(st.nextToken());
        int year = Integer.parseInt(st.nextToken());
        int hour = Integer.parseInt(st.nextToken());
        int minute = Integer.parseInt(st.nextToken());
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            days[1]++;
            tmin += 60 * 24;
        }
        int sum = 0;
        for (int i = 0; i < month; i++) {
            sum += 60 * 24 * days[i];
        }
        sum += 60 * 24 * (day - 1);
        sum += 60 * hour + minute;
        return (double)sum / (double)tmin * 100.0;
    }
}

