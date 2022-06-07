class Outer
{
	public void method()
	{	
          class Inner                   //定义一个局部内部类
          {
           int i=50;                 //局部内部类的成员变量
          }
	  Inner n=new Inner();
	  System.out.println("局部内部类的成员变量为："+n.i);  //通过内部类对象n来调用变量i
	}
}	
public class InnerTest6
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();            //创建外部类对象
		ot.method();                    //调用内部类中成员
	}
}
