package chapter12;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class Test {

	public static Connection getConnection() {
		try {
			Class.forName("com.mysql.jdbc.Driver");// 注册驱动
			return DriverManager.getConnection("jdbc:mysql://localhost:3306/asys?user=root&password=");// 拿链接
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return null;
	}

	public static void findAllUser() {
		Connection conn = Test.getConnection();
		try {
			PreparedStatement pst = conn.prepareStatement("select * from user");// 创建一个Statement
			ResultSet rs = pst.executeQuery();// 执行sql语句
			while (rs.next()) {
				String username = rs.getString("username");
				String password = rs.getString("password");
				System.out.println(username + "    " + password);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		Test.findAllUser();
	}
}
