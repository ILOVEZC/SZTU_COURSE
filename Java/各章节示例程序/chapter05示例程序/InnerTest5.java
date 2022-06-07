class Outer
{
    static class Inner
	{
	  int i=50;
	}
}	

public class InnerTest5
{
  	public static void main(String[] args)
        {
      	  Outer.Inner ot=new Outer.Inner();     //创建内部类对象
      	  System.out.println("内部类中的变量i的值为："+ot.i);
        }
}
