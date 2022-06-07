package sample;
class ParamPass {
   void add(int i) {
     i += 5;
    }


   public static void main(String args[]) {
     int a = 10;
     System.out.println("a and b before call: " +a );
     ParamPass ob=new ParamPass();
     ob.add(a);
     System.out.println("a and b after call: " +a );
   }
}
