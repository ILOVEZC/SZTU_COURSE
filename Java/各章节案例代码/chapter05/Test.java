/**
 * ≤‚ ‘¿‡
 */
package chapter05;

import chapter04.User;

public class Test {
	public static void main(String[] args){
		DataAccessor pda=new ProductDataAccessor();
		pda.save(new User("zhang","123"));
	}
}

