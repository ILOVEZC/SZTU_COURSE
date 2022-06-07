package sample;
public class Person
{ 
  int age;
  public void pout()
  {
     System.out.println("My age is" + age);
  }
  public static void main(String  args[])
  {
    Person p1 = new Person();
    Person p2 = new Person();
    p1.age = 20;
    p2.age=18;
    p1.pout();
    p2.pout();
  }
}
