import java.io.*;

public class IOExample {
    public static void main(String [] args) 
    throws IOException {
    	
        // 一行一行读入数据
        BufferedReader in = new BufferedReader(
        	new FileReader("IOExample.java"));
        String str;
        String str2 = new String();
        while((str=in.readLine ()) != null){
        	str2 = str2 + str + "\n"; 
        }
        in.close();
        
        // 从内存输入
        StringReader reader = new StringReader(str2);
        int outChar;
        while((outChar=reader.read()) != -1){
        	System.out.print((char)outChar);
        }
        
        // 从标准输入读取数据
        BufferedReader stdIn = new BufferedReader(
        	new InputStreamReader(System.in));
        System.out.print("输入一行数据：");
        System.out.println("您输入的是："+stdIn.readLine());
        
        // 输出到文件
        try {
        	BufferedReader sIn = new BufferedReader(
        		new StringReader(str2));
        	PrintWriter fileOut = new PrintWriter(
        		new BufferedWriter(new FileWriter("IOExample.out")));
        		int lineNo = 1;
        		while((str=sIn.readLine()) != null){
        			fileOut.println((lineNo++) + ":" + str);
        		}
        		fileOut.close();
        } catch(EOFException ex){
        	System.err.println("到达流末尾");
        }
    }
}