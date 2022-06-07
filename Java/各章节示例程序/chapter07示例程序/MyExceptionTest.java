package sample;
class MyException extends Exception {
    public MyException(String msg){ super(msg); }
    public MyException() { this("My Exception"); }

}
public class MyExceptionTest {
    private static int i = 1;
    public MyExceptionTest() {
    }
    public static void main(java.lang.String[] arg) {
       try{    
              a();
        }catch(MyException e){ System.out.println(e.getMessage()) ;}
    }
    private static void a() throws MyException {
        int i = 0;
        if(i < 10) throw new MyException("new desc");
    }
}
