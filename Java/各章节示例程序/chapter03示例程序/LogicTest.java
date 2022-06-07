package sample;
public class LogicTest{
  public static void main(String[] args){
    int i = 2;
    int j = 3;
    System.out.println("i = " + i);
    System.out.println("j = " + j);
    System.out.println("i != j is " + (i != j));
    System.out.println("(i<10&&j<10) is "+ ((i < 10) && (j < 10)) );
    System.out.println("((i+j)>10) is "+((i+j)>10));
    System.out.println("(!(i==j)) is "+(!(i==j)));
  }
}
