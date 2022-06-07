class Example05_1 {
   int a = 1;
   static int b = 2;
}
public class Example05_1Demo {
    public static void main(String args[]) {
     System.out.println("b=" + Example05_1.b);
     Example05_1.b *= 2;
     Example05_1 o1 = new Example05_1 ();
     o1.a = 10;
     System.out.println("o1.a="+ o1.a);
     System.out.println("b="+ o1.b);
     Example05_1 o2=new Example05_1 ();
     System.out.println("o2.a=" + o2.a);
     System.out.println("b="+ o2.b);
  }
}
