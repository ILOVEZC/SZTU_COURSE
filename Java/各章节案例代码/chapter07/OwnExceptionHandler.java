/**
 * 测试异常，处理异常
 */
package chapter07;

/**
 * @author ascent
 * @version 1.0
 */
public class OwnExceptionHandler {

	public static void main(String[] args) {
		OwnExceptionSource oes = new OwnExceptionSource();
		try {
			oes.divisor(2, 0);
		} catch (OwnException e) {
			//e.printStackTrace();
			System.out.println(e.getMessage());
		}finally{
			oes = null ;
		}
	}
}
