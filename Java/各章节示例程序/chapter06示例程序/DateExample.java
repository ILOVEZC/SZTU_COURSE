import java.util.Date;
class DateExample {
  public static void main(String args[]) {
    //创建Date对象
    Date date = new Date();
    //显示代表当前日期的字符串
    System.out.println(date);
    //显示代表当前日期的整数
    long msec = date.getTime();
    System.out.println("Milliseconds since Jan. 1, 1970 GMT = " + msec);
  }
}
