/*
 * InheritanceTest.java
 * 演示执行构造方法
 */

package sample;

public class InheritanceTest {

   public static void main(String[] args) {
        new SubA(1);
        SubA sa = new SubA();
        sa.print();
        new SubB();
   }

}

class SuperA {
    private int j = 10;
    public SuperA(int i) {
        System.out.println("constructor SuperA(int)");
    }

    
    public SuperA() {
        System.out.println("constructor SuperA()");
    }
    
    void print() {
        System.out.println("print() in SuperA");
    }
}

class SubA extends SuperA {
    private int k = 2;
    public SubA(int i) {
        super(i);
        System.out.println("constructor SubA(int)");
    }

    public SubA() {
        //隐含调用super()-->SuperA()
        System.out.println("constructor SubA()");
    }

    void print() {
        super.print();
        System.out.println("print() in SubA");
    }
}

class SuperB {
    
    public SuperB(String s) {
        System.out.println("Constructor superB(String)");
    }
}

class SubB extends SuperB {
    public SubB() {
        super("Hello");
        System.out.println("Constructor subB()");
    }
}
