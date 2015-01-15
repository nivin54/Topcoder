import java.util.*;
public class DesignCalendar {
	
        int gcd(int a,int b)
        {
            if(b==0)            
                return a;
            
            return gcd(b,a%b);
            
        }
        public int shortestPeriod(int dayLength, int yearLength) 
        {
		
            return dayLength/gcd(dayLength,yearLength);
	}
};

