class Outer       //这是一个外部类
{ 
  int outer_x = 100;    //外部类成员
  class Inner     //这是一个内部类
  {          
      void display()    //内部类成员
      {
         System.out.println("display: outer_x = " + outer_x);
       }
    }
}
