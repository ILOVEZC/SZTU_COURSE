class Example05_4  {
   static int i = 5;
   static int j = 6;
   static int k;
   static void method() {
     System.out.println("k="+ k);
   }
   static  {
   	     if(i * 5 >= j * 4) k = 10;
    }
   
   public static void main(String args[]) {
     Example05_4.method();
   }
}
