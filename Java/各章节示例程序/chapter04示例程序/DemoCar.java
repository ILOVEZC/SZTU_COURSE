/**
 * 重写方法的调用
 */
package sample;
class Car {
    int color_number;  
    int door_number;
    int speed;
    public void push_break(){
            speed = 0;
    }
    public void add_oil() {     }
}  

class Trash_Car  extends  Car{
    double amount;
    public void fill_trash() {    }
    public void push_break() {
             speed = speed - 10;
    }
}
public class DemoCar{
  public static void main( String args[ ] ){
    Car  aCar = new Trash_Car( );
    aCar. push_break( );
  }
} 
