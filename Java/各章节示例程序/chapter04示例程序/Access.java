/**
* 演示私有数据与继承
*/
//A是父类.
package sample;
class A { 
   int i; //默认存取控制
   private int j; //私有变量
   void setij(int x, int y) {
     i = x;
     j = y;
   }
}
//B不能获取A中的私有变量
class B extends A {
   int total;
   void sum() {
     total = i + j; //错误，j 不能被获取
   }
}

class Access {
   public static void main(String args[]) {
     B subOb = new B();
     subOb.setij(10, 12);
     subOb.sum();
     System.out.println("Total is " + subOb.total);
   }
}
