 class FinallyExample {
  static void method(int i) {
	 try {
	  if(i == 2) {
		 System.out.println("第2种情况： 发生算术运算异常");
		 throw new ArithmeticException();
	  } if(i == 3) {
		 System.out.println("第3种情况： 发生数字格式异常");
		 throw new NumberFormatException();
	  } if(i == 4) {
		 System.out.println("第4种情况： 发生数组下标越界异常");
		 throw new ArrayIndexOutOfBoundsException();
	  }
	  System.out.println("第1种情况： 没有发生异常");
	 } catch(ArithmeticException e) {
	  System.out.println("异常被捕捉处理″");
	 } catch(ArrayIndexOutOfBoundsException e) {
	  System.out.println("异常被捕捉，但又被重新引发");
	  throw e; 
	 } finally {
	  System.out.println("这是finally子句");
	 }
	 System.out.println("这是try语句后的代码");
	  }
  public static void main(String args[]) {
	 for(int i = 1; i < 5; i++) {
	  try {
	    method (i);
	  } catch(RuntimeException e){
	    System.out.println("由main方法捕捉到异常");
	  }
	 }
  }
 }
