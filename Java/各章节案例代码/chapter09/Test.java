package chapter09;

import java.util.HashMap;
import java.util.Set;

import chapter04.User;

/**
 * @author ascent
 * @version 1.0
 */
public class Test {
	public static void main(String[] args) {
		ProductDataAccessor pda = new ProductDataAccessor();
		HashMap user = pda.getUserTable();
		Set set = user.keySet();
		for (Object o : set) {
			User u = (User) user.get((String) o);
			System.out.println(u);
		}
	}
}
