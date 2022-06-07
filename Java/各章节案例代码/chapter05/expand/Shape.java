/**
 * 描述图形的抽象类
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public abstract class Shape {
	
	public int x;

	public int y;

	public Shape() {

	}

	/**
	 * @param x
	 * @param y
	 */
	public Shape(int x, int y) {
		super();
		this.x = x;
		this.y = y;
	}

	/**
	 * 画一个图形
	 */
	public abstract void draw();

	/**
	 * 获得图形的面积
	 * @return
	 */
	public abstract double getArea();
}
