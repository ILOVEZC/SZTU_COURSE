/**
 * 描述矩形的类
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public class Rectangle extends Shape {
	
	public Rectangle(int x , int y ){
		super(x,y);		
	}

	@Override
	public void draw() {
		System.out.println("画了一个矩形了...");

	}

	@Override
	public double getArea() {
		return x * y;
	}

}
