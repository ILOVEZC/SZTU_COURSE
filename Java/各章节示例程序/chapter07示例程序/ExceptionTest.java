class MyException extends Exception {
    public MyException(String msg){ super(msg); }
    public MyException() { this("My Exception"); }
    //public String toString(){бн}

}
public class ExceptionTest {
    private static int i = 1;
    public ExceptionTest() {
    }
    public static void main(String args[]) {
       try{    
              a();
        }catch(MyException e){ System.out.println(e.getMessage()) ;}
    }
    private static void a() throws MyException {
        int i = 0;
        if(i < 10) throw new MyException("new desc");
    }
}
