/**
 * 演示对象的比较
 */
package sample;

public class EqualTest {
    
    public static void main(String[] args) {
        String s1 = new String("Hello");
        String s2 = s1;
        String s3 = new String("Hello");
        System.out.println("s1 == s2:" + (s1==s2));
        System.out.println("s1 == s3:" + (s1==s3));
        System.out.println("s1.equals(s3):" + s1.equals(s3));
        
        Account a = new Account("John", 100.00);
        Account b = new Account("John", 100.00);
        System.out.println("a == b:" + (a==b));
        System.out.println("a.equals(b):" + a.equals(b));
    }    
}

class Account {
    private String name;
    private double balance;
    
    public Account(String name, double balance) {
        this.name = name;
        this.balance = balance;
    }
    
    public boolean equals(Account a) {
        return (name.equals(a.name) && (balance == a.balance));
    }
}
