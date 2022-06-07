import java.util.*;
public class IteratorExample{
	public static void main(String argv[]){
		List list = new LinkedList();
		list.add("abc");
		list.add(new Integer(3));
		list.add(new Boolean(true));
		list.add(new Integer(3));
		System.out.println(list);
		Iterator it = list.iterator();
		while (it.hasNext())
		System.out.println(it.next());
		it.remove();	}
}
