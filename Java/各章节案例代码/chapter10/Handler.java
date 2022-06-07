package chapter10;

import java.net.Socket;

/**
 * 这个类是socket连接的处理器 例如：
 * <pre>
 * Handler aHandler = new Handler(clientSocket, myProductDataAccessor);
 * aHandler.start();
 * </pre>
 * @author ascent
 * @version 1.0
 */
public class Handler extends Thread {

	protected Socket clientSocket;

	private int opCode;

	protected boolean done;

	public Handler() {
	}

	public void run() {

		try {
			while (!done) {

				log("等待命令...");

				switch (opCode) {
				case ProtocolPort.OP_GET_PRODUCT_CATEGORIES:
					opGetProductCategories();
					break;
				case ProtocolPort.OP_GET_PRODUCTS:
					opGetProducts();
					break;
				case ProtocolPort.OP_GET_USERS:
					opGetUsers();
					break;
				case ProtocolPort.OP_ADD_USERS:
					opAddUser();
					break;
				default:
					System.out.println("错误代码");
				}
			}
		} catch (Exception exc) {
			log(exc);
		}
	}

	private void opGetUsers() {
		System.out.println("获得用户的信息…");
	}

	protected void opGetProductCategories() {
		System.out.println("根据类别获得产品的信息…");
	}

	protected void opGetProducts() {
		System.out.println("获得所有产品的信息…");
	}

	public void opAddUser() {
		System.out.println("添加用户的信息…");
	}

	public void setDone(boolean flag) {
		done = flag;
	}

	protected void log(Object msg) {
		System.out.println("处理器: " + msg);
	}
}
