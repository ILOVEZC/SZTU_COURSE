/**
 * 演示算数异常
 */
package chapter07;

/**
 * @author ascent
 * @version 1.0
 */
public class TestArithmetic {
	public TestArithmetic() {
	}

	public static void ceshi1() {
		int i = 0;
		int t = 10 / i;
	}

	public static void ceshi2() {
		try {
			int i = 0;
			int t = 10 / i;
		} catch (Exception e) {
			System.out.println("出现异常.............");
		}
	}

	public static void main(String[] args) {
		ceshi1();
		//ceshi2();
	}
}
