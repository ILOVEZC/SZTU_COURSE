package sample;

interface Cook{
  void makeFood();	
}

public class LambdaExpressionTest {

     public static void main(String[] args) {
         //内部类方法
         invokeCook(new Cook() {
             @Override
             public void makeFood() {
                 System.out.println("享用美食！");
             }
         });
         System.out.println("===========");
         //使用lambda表达式
         invokeCook(()->{
             System.out.println("享用美食！");
         });
     }
     public static void invokeCook(Cook cook){
         cook.makeFood();
     }
 
}
