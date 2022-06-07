package chapter06;

import java.util.Collection;
import java.util.HashMap;
import chapter04.User;

public class Test {
	public static void main(String[] args){
		DataAccessor da = new ProductDataAccessor();
		HashMap map = da.getUsers();
		Collection<User> coll = map.values();
		for(User u : coll){
			System.out.println(u);
		}
	}
}

