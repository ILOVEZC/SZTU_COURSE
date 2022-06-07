class Outer
{
	class Inner
	{
		int i=50;
	        int j=100;
	}
}	

public class InnerTest3
{
	public static void main(String[] args)
	{
		Outer.Inner on1=new Outer().new Inner();
		Outer ot=new Outer();
		Outer.Inner on2=ot.new Inner();
		System.out.println("内部类中的变量i的值为："+on1.i);
		System.out.println("内部类中的变量j的值为："+on2.j);
	}
}
