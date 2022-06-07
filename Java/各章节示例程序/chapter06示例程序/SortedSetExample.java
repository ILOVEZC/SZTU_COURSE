import java.util.*;
public class SortedSetExample{
	public static void main(String argv[])	{
		SortedSet set = new TreeSet();
		set.add(new Integer(5));
		set.add(new Integer(1));
		set.add(new Integer(8));
		set.add(new Integer(5));
		set.add(new Integer(3));
		System.out.println(set);
	}
}
