/**
 *演示数据封装性
 */
package sample;
class EncapTest {
   int a; // 默认存取控制（default access）
   public int b; //公有存取控制（public access）
   private int c; //私有存取控制（private access）
   // 访问c的方法
   void setc(int i) {//设定c的值
     c = i;
   }
   int getc() { //获得c的值
     return c;
   }
}

public class AccessTest {
   public static void main(String args[]) {
     EncapTest ob = new EncapTest();
     // 以下代码是正确的
     ob.a = 10;
     ob.b = 20;
     // 以下代码会产生错误
     // ob.c = 30; 
     // 我们必须通过公有的方法操作c
     ob.setc(30); // 正确
     System.out.println("a，b，and c: " + ob.a + " " +ob.b + " " + ob.getc());
   }
}
