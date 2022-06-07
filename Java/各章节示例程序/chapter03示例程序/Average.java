package sample;
public class Average {
	
	public void average(int score[]){
		int total = 0;
		int n = score.length;
		for (int i = 0; i < n; ++i)
		{ 
				total=total+score[i];
		}
		System.out.println("average="+total/n);
	}
    
	public static void main(String args[]){
               Average a = new Average();
               int score2[] =  { 82, 72, 63, 94, 75, 86, 87, 78, 79, 100  };
	       a.average(score2);
	}
	
}


