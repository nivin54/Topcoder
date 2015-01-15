
// END CUT HERE
import java.util.*;
public class ShufflingMachine {
	public double stackDeck(int[] shuffle, int maxShuffles, int[] cardsReceived, int K) 
        {
            int[] occurence,copyo,proboccurence;
            occurence=new int[55];
            copyo=new int[55];                   
            int sz=shuffle.length;
            proboccurence = new int[sz];
            System.out.println(sz);
            for(int i=0;i<sz;i++){
			occurence[i]=i;copyo[i]=i;}
		for(int i=0;i<maxShuffles;i++)
		{				
				for(int j=0;j<sz;j++)
					occurence[shuffle[j]]=copyo[j];
				for(int j=0;j<sz;j++)
					 copyo[j]=occurence[j];
							
				for(int k=0;k<(int)cardsReceived.length;k++)
						proboccurence[copyo[cardsReceived[k]]]+=1;
		}
            Arrays.sort(proboccurence);
            double sum=0.0;
            for(int k=sz-1;k>(sz-(K+1));k--){
                sum+=(double)proboccurence[k]/(double)maxShuffles;}
            return sum;                                       		
	}

}

