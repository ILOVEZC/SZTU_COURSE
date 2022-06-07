/**
 * 描述圆的类
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public class Circle extends Shape {

	private int r;

	public Circle() {
	}

	/**
	 * @param r
	 */
	public Circle(int r) {
		super();
		this.r = r;
	}

	@Override
	public void draw() {
		System.out.println("画了一个圆了...");
	}
	
	@Override
	public double getArea() {
		return Math.PI * r * r;
	}

}
