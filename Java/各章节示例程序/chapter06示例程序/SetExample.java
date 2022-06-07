import java.util.*;
public class SetExample{
	public static void main(String argv[])	{
		Set set = new HashSet();
		set.add(new Integer(5));
		set.add("abc");
		set.add(new Double(1.2));
		set.add(new Integer(5));
		set.add("abc");
		System.out.println(set);
	}
}
