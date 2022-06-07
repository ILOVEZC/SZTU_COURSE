/**
 * 可能发生的异常源
 */
package chapter07;

/**
 * @author ascent
 * @version 1.0
 */
public class OwnExceptionSource {
	public int divisor(int n ,int m) throws OwnException{
		int z = 0 ;
		if(m==0){
			throw new OwnException("除数不能为零！");
		}else{
			z=n/m ;
		}
		return z ;
	}
}
