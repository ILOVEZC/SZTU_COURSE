/*
 *演示方法重写
 */

package sample;
import java.io.IOException;

public class OverridenTest {
  public static void main(String[] args) {
      SuperC c = new SubC();
      c.methodA(0);
      c.methodB();
      c.methodC();
      try{
         c.methodD("hello", 3);
      }catch(Exception e) {}
      c.methodE("aaa", 2);
  }
}

class SuperC {
    public void methodA(int i) {
        System.out.println("methodA(int) in SuperC");
    }
    
    protected void methodB() {
        System.out.println("methodB() in SuperC");
    }
    
    void methodC() {
        System.out.println("methodC() in SuperC");
    }
    
    public void methodD(String s, int i) throws Exception {
        System.out.println("methodD(String, int) in SuperC");
    }
    
    public int methodE(String s, int i) {
        System.out.println("methodE(String, int) in SuperC");
        return 0;
    }
}

class SubC extends SuperC {
    public void methodA(int i) {
        System.out.println("methodA(int) in SubC");
    }
    
    public void methodB() {
        System.out.println("methodB() in SubC");
    }
        
    void methodC() {
        System.out.println("methodC() in SubC");
    }
    
    public void methodD(String s, int i) throws IOException {
        System.out.println("methodD(String, int) in SubC");
    }
    
    public int methodE(String s, int i) {
        System.out.println("methodE(String, int) in SubC");
        return 0;
    }
     
}
