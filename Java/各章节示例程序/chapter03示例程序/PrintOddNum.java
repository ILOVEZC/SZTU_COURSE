package sample;
public class PrintOddNum
{
  public static void main(String [] args)
  {
	for(int i=1;i<100;i+=2)
	{
	  if(i>10) break;
	  System.out.println("i="+i);
	}
  }
}
