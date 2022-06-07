package sample;
public class ArrayTest1 {
   public static void main(String args[]) {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = 0;
     for(int e:nums) //使用增强型for-each循环语句
          { result+=e;}
     System.out.println("Total is " + result);
   }
}

