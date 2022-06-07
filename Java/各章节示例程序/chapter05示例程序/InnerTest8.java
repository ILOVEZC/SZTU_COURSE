class InnerFather
{
	public void method()                    //父类中的方法
	{
	  System.out.println("这是内部类父类的方法");
	}
}
public class InnerTest8
{
	public static void main(String[] args)
	{
	   InnerFather nf=new InnerFather()             //创建匿名内部类
	   {
		  public void method()                    //重写父类中的方法
	    {
			System.out.println("这是匿名内部类的方法");
		}
	};
	nf.method();                                  //调用匿名内部类中的方法
	}
}
