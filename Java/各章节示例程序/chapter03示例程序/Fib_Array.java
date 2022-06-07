package sample;
public class Fib_Array {
   public static void main(String args[])
 {   int fib[] = new int[20];
      int i;
      fib[0]=0; fib[1]=1;
       for(i=2; i<fib.length; i++)
       fib[i]=fib[i-2]+fib[i-1];
      for(i=0; i<fib.length; i++)
         System.out.print("  " + fib[i]);
   }
}
