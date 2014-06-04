
import java.util.*;
public class Embassy {
	public int visaApplication(int[] forms, int dayLength, int openTime) {
            int sz=forms.length;
            int ret=1<<30;
            for(int start=0;start<dayLength;start++)
            {
                int curr=start;
                for(int i=0;i<sz;i++)
                {
                curr+=forms[i];
                if(curr%dayLength > openTime)
                    curr =curr+dayLength - curr%dayLength;
                
                }
                ret=Math.min(ret, curr-start);
            }
            return ret;
            
        }
	
}

