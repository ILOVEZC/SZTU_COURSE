package chapter05;

import chapter04.User;

/**
 * 这个抽象类定义了如何读取一个数据文件。 
 * 它提供的方法可以用来获得产品的分类和具体的产品信息
 * @author ascent
 * @version 1.0
 */
public abstract class DataAccessor {

	/**
	 * 默认构造方法
	 */
	public DataAccessor() {

	}

	/**
	 * 从文件中读取数据
	 */
	public abstract void load();

	/**
	 * 向文件中保存数据
	 */
	public abstract void save(User user);

	/**
	 * 日志方法
	 */
	protected void log(Object msg) {
		System.out.println("数据存取类　Data Accessor:  " + msg);
	}
}

