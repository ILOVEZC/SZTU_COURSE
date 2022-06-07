/**
 *一个简单的Java演示程序
 */
package sample; // 第一步（step 1）
import java.io.*; // 第二步（step 2）
public class FirstJavaProgram { //第三步（step 3）

       //数据部分（Data or Fields），第四步（step 4）
        private String name;
        private int age;
        
        /* 方法部分（Methods），第五步（step 5）
        一种特殊方法——构造方法/函数（constructor）*/
        public FirstJavaProgram(String aName, int aAge){
           name = aName;
           age = aAge;
        }
        //数据读取方法（Accessor Method）
        public String getName() { return name;}

        public void setName(String aName){
            name = aName;
        }        

        //运行入口方法（Main Method）        
        public static void main(String[] args) {
       //创建对象，第六步（step 6）
       FirstJavaProgram fjp = new FirstJavaProgram("Zhang", 24);
            System.out.println("Name is: " + fjp.getName()); } 
 }
