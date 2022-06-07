package chapter05;

import chapter04.User;

/**
 * 产品数据读取的实现类
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor extends DataAccessor {

	/**
	 * 默认构造方法
	 */
	public ProductDataAccessor() {
		this.load();
	}

	/**
	 * 读取数据的方法
	 */
	@Override
	public void load() {
		System.out.println("重写的加载方法......");
	}

	/**
	 * 保存数据
	 */
	@Override
	public void save(User user) {
		System.out.println("重写的保存方法......");
	}

	/**
	 * 日志方法.
	 */
	@Override
	protected void log(Object msg) {
		System.out.println("ProductDataAccessor类: " + msg);
	}

}
