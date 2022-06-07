import java.util.*;
public class ListExample{
   public static void main(String argv[])   {
           List list1 = new LinkedList();
           List list2 = new ArrayList();
           list1.add("abc");
           list1.add(new Integer(3));
           list1.add(new Boolean(true));
           list1.add(new Integer(3));
           list2.add("abc");
           list2.add(new Integer(3));
           list2.add(new Boolean(true));
           list2.add(new Integer(3));
           System.out.println("LinkedList: "+list1);
           System.out.println("ArrayList: "+list2);
   }
}
