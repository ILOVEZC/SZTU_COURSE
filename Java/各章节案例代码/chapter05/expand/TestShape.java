/**
 * 测试类
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public class TestShape {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
//		Shape ss = new Rectangle(4,5);
//		ss.draw();
//		System.out.println("面积是："+ss.getArea());
		
		Shape[] s = new Shape[]{new Circle(3),new Rectangle(4,5),new Circle(4),new Circle(6)} ;
		
		for(int i=0 ; i < s.length ; i++){
			s[i].draw();
			System.out.println("面积是："+s[i].getArea());
		}
	}
}
