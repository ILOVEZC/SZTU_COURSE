class  Example6_2{
	//覆盖Object类中的toString（）方法
	public String toString(){
		return "example";
	}
}
public class ValueOfTest {
	public static void main(String[] args)	{
		char c=0x41;
		int i=0x41;
		boolean b=i==c;
		Example6_2 obj=new  Example6_2();
		char[] chars={'a','1','b','2'};
		System.out.print(String.valueOf(b)+" ");
		System.out.print(String.valueOf(c)+" ");
		System.out.print(String.valueOf(i)+" ");
		System.out.print(String.valueOf(obj)+" ");
		System.out.println(String.valueOf(chars)+" ");
	}
}