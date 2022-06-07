package chapter11;

import java.io.Serializable;

public class User implements Serializable{

	private String username; // 用户名

	private String password; // 密码

	private int authority; // 用户权限

	/**
	 * 默认构造方法
	 */
	public User() {
	}

	public User(String username, String password) {
		this.username = username;
		this.password = password;
	}

	/**
	 * 带所有参数构造方法
	 * @param username
	 * @param password
	 * @param authority
	 */
	public User(String username, String password, int authority) {
		this.username = username;
		this.password = password;
		this.authority = authority;
	}

	public int getAuthority() {
		return authority;
	}

	public void setAuthority(int authority) {
		this.authority = authority;
	}

	public String getUsername() {
		return username;
	}

	public void setUsername(String username) {
		this.username = username;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}
	
	@Override
	public String toString() {
		return "用户名："+this.getUsername() + "  密码：" + this.getPassword();
	}
}
