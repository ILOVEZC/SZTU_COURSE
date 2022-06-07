class Outer
{
    static class Inner
	{
	  int i=50;
	}
	public void method()
	{
	   Inner n=new Inner();
	   int j=n.i;	
	   System.out.println("静态内部类的变量值为"+j);
	}
}	

public class InnerTest4
{
	public static void main(String[] args)
        {
		Outer ot=new Outer();
		ot.method();
        }
}
