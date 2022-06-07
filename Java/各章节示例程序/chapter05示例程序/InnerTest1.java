class Outer
{
    int i=100;
	class Inner
	{
		public void method()
		{
			System.out.println("外部类中的成员变量:"+i);
		}
	}
}

public class InnerTest1
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();
		Outer.Inner In=ot.new Inner();
		In.method();
	}
}