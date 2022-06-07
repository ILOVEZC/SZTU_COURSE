package chapter06;

import java.util.StringTokenizer;

import chapter04.User;

/**
 * 产品数据读取的实现类
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor extends DataAccessor {

	/**
	 * 模拟数据文件user.db数据
	 */
	String[] str = new String[]{"user1,123,0","user2,456,0","user3,123,0","user4,789,0"};
	
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
		for (int i = 0; i < str.length; i++) {
			String s = str[i];
			
			StringTokenizer st = new StringTokenizer(s,",",false);
			String username = st.nextToken().trim();
			String password = st.nextToken().trim();
			String authority = st.nextToken().trim();
			User u = new User(username,password,Integer.parseInt(authority));
			userTable.put(username, u);
		}
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
