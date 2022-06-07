public class Minimum{
	public static void main(String[] args)	{
		int[] a={75,43,52,14,32,41,22,11,33,84,89};
		int min=a[0];
		for(int i=1;i<a.length;i++)
		{
			min=Math.min(min,a[i]);
		}
		System.out.println("The minimum value is:"+min);
	}
}
