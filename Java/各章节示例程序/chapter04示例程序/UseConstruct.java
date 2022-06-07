package sample;
public class UseConstruct {
 
  public static void main(String[] args) {
   // 创建Person对象，并明确对象的年龄和姓名
   Person p = new Person(23, "张三");
   p.speak();
  }
}

class Person {

  // Person的成员属性age和name
  private int age;
  private String name;
  
  // Person的构造方法，拥有参数列表
  Person(int a, String nm) {
  // 接受到创建对象时传递进来的值，将值赋给成员属性
     age = a;
     name = nm;
  }
  
  public void speak() {
     System.out.println("name=" + name + ",age=" + age);
  }
}