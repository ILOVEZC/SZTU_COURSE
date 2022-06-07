package chapter09;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.StringTokenizer;

import chapter04.User;


/**
 * 产品数据读取的实现类
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor {
	// ////////////////////////////////////////////////////
	//
	// 用户文件格式如下
	// 用户帐号,用户密码,权限
	// ----------------------------
	//
	protected static final String USER_FILE_NAME = "user.db";
	private HashMap userTable;
	public HashMap getUserTable() {
		return this.userTable;
	}

	/**
	 * 默认构造方法
	 * 
	 */
	public ProductDataAccessor() {
		load();
	}

	/**
	 * 读取数据的方法
	 */
	public void load() {
		userTable = new HashMap();
		ArrayList productArrayList = null;
		StringTokenizer st = null;
		User userObject;
		String line = "";
		String userName, password, authority;
		try {
			line = "";
			log("读取文件: " + USER_FILE_NAME + "...");
			BufferedReader inputFromFile2 = new BufferedReader(new FileReader(
					USER_FILE_NAME));
			while ((line = inputFromFile2.readLine()) != null) {
				st = new StringTokenizer(line, ",");
				userName = st.nextToken().trim();
				password = st.nextToken().trim();
				authority = st.nextToken().trim();
				userObject = new User(userName, password, Integer
						.parseInt(authority));

				if (!userTable.containsKey(userName)) {
					userTable.put(userName, userObject);
				}
			}
			inputFromFile2.close();
			log("文件读取结束!");
			log("准备就绪!\n");
		} catch (FileNotFoundException exc) {
			log("没有找到文件 \"" + USER_FILE_NAME + "\".");
			log(exc);
		} catch (IOException exc) {
			log("发生异常: " + USER_FILE_NAME);
			log(exc);
		}
	}

	/**
	 * 保存数据
	 */
	public void save(User user) {
		log("读取文件: " + USER_FILE_NAME + "...");
		try {
			String userinfo = user.getUsername() + "," + user.getPassword()
					+ "," + user.getAuthority();
			RandomAccessFile fos = new RandomAccessFile(USER_FILE_NAME, "rws");
			fos.seek(fos.length());
			fos.write(("\n" + userinfo).getBytes());
			fos.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	/**
	 * 日志方法.
	 */
	protected void log(Object msg) {
		System.out.println("ProductDataAccessor类: " + msg);
	}

	public HashMap getUsers() {
		this.load();
		return this.userTable;
	}
}
