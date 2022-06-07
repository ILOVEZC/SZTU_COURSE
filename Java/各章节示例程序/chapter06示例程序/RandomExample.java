import java.util.*;
class RandomExample{
	public static void main(String[] args){
		Random r1=new Random(1234567890L);
		Random r2=new Random(1234567890L);
		boolean b=r1.nextBoolean();     
		int i1=r1.nextInt(100);
		int i2=r2.nextInt(100);
		double d1=r1.nextDouble();
		double d2=r2.nextDouble();
		System.out.println(b);
	    System.out.println(i1);
	    System.out.println(i2);
	    System.out.println(d1);
	    System.out.println(d2);
	}
}
