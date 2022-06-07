package sample;
public class IfLeapyear {
      
	public void judge(int year){
		int leap = 0;
		if((year%4==0)&&(year%100!=0)||(year%400==0))
		    leap=1;
		 else
		   leap=0;
		 if(leap==1)
		    System.out.println(year +" is a leap year.");
		 else
		   System.out.println(year +" is not a leap year.");
	}
	
	public static void main(String args[]){
                       IfLeapyear ily = new IfLeapyear();
                       ily.judge(1989);
                       ily.judge(2000);
	}
}