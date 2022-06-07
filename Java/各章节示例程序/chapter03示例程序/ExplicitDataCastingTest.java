package sample;
public class ExplicitDataCastingTest {
  public static void main(String args[]) {
    byte b;
    int i = 257;
    double d = 123.456;
    System.out.println("\nCasting of int to byte.");
    b = (byte) i;
    System.out.println("b is:" + b);
    System.out.println("\nCasting of double to int.");
    i = (int) d;
    System.out.println("i is:" + i);
  }
}