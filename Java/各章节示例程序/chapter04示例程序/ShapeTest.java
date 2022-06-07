package sample;
/**
 * 演示多态的实现
 * @author Lixin
 */

public class ShapeTest {

  public ShapeTest() {
  }

  public static void main(String[] args) {
    Shape[] s={new Shape(1,4),
                 new Rectangle(1,2,3,4),
                 new Circle(2,3,5)};
    for(int k = 0; k < s.length; k++){
        s[k].draw();
    }
  }

}

class Shape{
  protected int x;
  protected int y;

  public Shape(){ }
  public Shape(int x, int y){
     this.x = x;
     this.y = y;
  }
  public void draw(){System.out.println("This is a test in shape.");}

}

class Rectangle extends Shape{
  private int heigth;
  private int weight;

  public Rectangle(int x, int y, int w, int h){
     super(x,y);
     this.weight = w;
     this.heigth = h;

  }
  public void draw(){System.out.println("This is a test in  Rectangle.");}
}

class Circle extends Shape{
  private int r;

  public Circle(int x, int y, int r){
    super(x,y);
    this.r = r;

  }
  public void draw(){System.out.println("This is a test in Circle.");}

}
