/**
 * 自定义异常类
 */
package chapter07;

/**
 * @author ascent
 * @version 1.0
 */
public class OwnException extends Exception {

	/**
	 * defult constructor
	 */
	public OwnException() {
		this("发生异常了");
	}

	/**
	 * @param message
	 */
	public OwnException(String message) {
		super(message);
	}
}
