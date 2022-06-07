class Outer
{   
     int i=30;
     public void method()
     {	
      class Inner                   //定义一个局部内部类
      {   public void innerMethod()
          { 
            System.out.println("外部类的成员变量值为："+i);     
          }           
      }
      Inner n=new Inner();
      n.innerMethod();
     }
}	
public class InnerTest7
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();            //创建外部类对象
		ot.method();                    //调用内部类中成员
	}
}
