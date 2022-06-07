package chapter11;

public interface ProtocolPort {
	public static final int OP_GET_PRODUCT_CATEGORIES = 100;
	public static final int OP_GET_PRODUCTS = 101;
	public static final int OP_GET_USERS = 102;
	public static final int OP_ADD_USERS = 103;	
	public static final int DEFAULT_PORT = 5150;
	public static final String DEFAULT_HOST = "localhost"; 
}
