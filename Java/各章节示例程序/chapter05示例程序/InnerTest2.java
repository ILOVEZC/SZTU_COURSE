class Outer
{
    class Inner
	{
	 int i=50;
	}
   
    public void method()
    {
	    Inner n=new Inner();
	    int j=n.i;	
		System.out.println("内部类的变量值为"+j);
	}
}	

public class InnerTest2
{
	public static void main(String[] args)
    {
		Outer ot=new Outer();
		ot.method();
	}
}
