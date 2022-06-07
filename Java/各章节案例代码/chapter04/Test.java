/**
 * ²âÊÔ
 */
package chapter04;

public class Test {
	public static void main(String[] arg) {
		User user = new User();
		user.setUsername("admin");
		user.setPassword("123");
		User user1 = new User("ascent", "456");
		System.out.println(user.getUsername());
		System.out.println(user1.getUsername());
	}
}
