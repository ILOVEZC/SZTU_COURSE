 class Example7_2 {
  static int method(int x,int y) {
    if(x < y) 
      throw new ArithmeticException("x<y");
    return x - y;
  }
  public static void main(String[] args) {
    method(6, 9);
  }
 }
