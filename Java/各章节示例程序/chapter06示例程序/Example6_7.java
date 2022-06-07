package sample;
public class Example6_7 {
    public static void main(String args[]) {
        String s = " Hello, Java,  Stri\tng ";
        System.out.println("s原始值: " + s);
        System.out.println("判断字符串是否为空:" + s.isBlank());
        System.out.println("去掉首尾空格:" + s.strip());
        System.out.println("去掉尾空格:" + s.stripTrailing());
        System.out.println("去掉首空格:" + s.stripLeading());
        System.out.println("字符串重复:" + s.repeat(3));
        System.out.println("行数统计:" + s.lines().count());

    }
}