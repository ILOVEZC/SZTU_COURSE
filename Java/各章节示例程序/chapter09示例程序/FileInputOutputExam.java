import java.io.*;
public class FileInputOutputExam{
	public static void main(String [] args){
		if(args.length != 2){
			System.out.println("请指定2个参数，源文件和目标文件名称！");
			System.exit(-1);
		}
		FileInputStream in = null;
		FileOutputStream out = null;
		try{
			in = new FileInputStream(args[0]);
		} catch(FileNotFoundException ex){
			System.out.println("无法打开源文件或该文件不存在！");
			System.exit(-2);
		}
		try{
			out = new FileOutputStream(args[1]);
		}catch(FileNotFoundException ex){
			System.out.println("无法打开目标文件或该文件无法创建！");
			System.exit(-3);
		}
		int c;
		try{
			while( (c=in.read()) != -1){
				out.write(c);
			}
			in.close();
			out.close();
		} catch(IOException ioEx){
			ioEx.printStackTrace();
		}
	}
}