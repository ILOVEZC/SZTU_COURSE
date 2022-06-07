package chapter11;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.IOException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JScrollPane;
import javax.swing.JTextField;

public class RegistFrame extends JFrame {
	private JTextField userText;

	private JPasswordField password;

	private JPasswordField repassword;

	private JLabel tip;

	
	private UserDataClient userDataClient;
	
	
	public RegistFrame() throws IOException {
		this.setTitle("用户注册");// 设置注册窗口标题
		
		userDataClient=new UserDataClient();
		
		Container container = this.getContentPane();
		container.setLayout(new BorderLayout());// 设置容器布局是border布局
		JPanel registPanel = new JPanel();
		JLabel userLabel = new JLabel("用户帐号：");
		JLabel passwordLabel = new JLabel("用户密码：");
		JLabel repasswordLabel = new JLabel("重复密码：");
		userText = new JTextField(15);
		password = new JPasswordField(15);
		repassword = new JPasswordField(15);
		JButton regist = new JButton("注册");
		JButton exitButton = new JButton("退出");
		registPanel.add(userLabel);
		registPanel.add(new JScrollPane(userText));
		registPanel.add(passwordLabel);
		registPanel.add(new JScrollPane(password));
		registPanel.add(repasswordLabel);
		registPanel.add(new JScrollPane(repassword));
		registPanel.add(regist);
		registPanel.add(exitButton);

		setResizable(false);// 设置窗口大小不可变
		setSize(260, 180);
		setLocation(300, 100);
		JPanel tipPanel = new JPanel();
		tip = new JLabel();// 用于显示提示信息
		tipPanel.add(tip);

		container.add(BorderLayout.CENTER, registPanel);
		container.add(BorderLayout.NORTH, tip);

		exitButton.addActionListener(new ExitActionListener()); // 退出按钮添加监听
		regist.addActionListener(new RegistActionListener()); // 注册按钮添加监听
		this.addWindowListener(new WindowCloser()); // 窗口关闭的监听
	}

	/**
	 * 退出按钮事件监听
	 * 
	 * @author Administrator
	 * 
	 */
	class ExitActionListener implements ActionListener {

		public void actionPerformed(ActionEvent event) {
			setVisible(false);
			dispose();
		}
	}

	/**
	 * 注册按钮事件监听
	 * 
	 * @author Administrator
	 * 
	 */
	class RegistActionListener implements ActionListener {

		public void actionPerformed(ActionEvent arg0) {
			// 用户注册操作
			boolean bo =userDataClient.addUser(userText.getText(), new String(password.getPassword()));
			if (bo) {
				tip.setText("注册成功！");
			} else {
				tip.setText("用户名已存在！");
			}
		}

	}

	/**
	 * "关闭窗口"事件处理内部类
	 * 
	 * @author Administrator
	 * 
	 */
	class WindowCloser extends WindowAdapter {

		public void windowClosing(WindowEvent e) {
			setVisible(false);
			dispose();
		}
	}

}
