import java.io.IOException;
class ExceptionAgain {
  static void method() throws IOException {
	 try {
	  throw new RuntimeException("demo_1");
	 } catch(RuntimeException e) {
	  System.out.println("caught"+ e +" in m1");
	  throw new IOException("demo_2");
	 }
  }
  
  public static void main(String args[]) {
	 try {
	  method();
	 } catch(IOException e){
	  System.out.println("caught " + e +" in main");
	 }
	 System.out.println("exiting from main");
   }
}
