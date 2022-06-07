 class Example7_3 {
  static int method(int x,int y)throws Exception {
    if(x <y) 
      throw new Exception("x<y");
    return x - y;
  }
  public static void main(String[] args) throws Exception  {
    int r = method(6, 9);
    System.out.println("r="+ r);
  }
 }
