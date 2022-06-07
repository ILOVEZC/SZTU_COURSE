import java.io.*;
import java.text.SimpleDateFormat;

public class FileExample {
		
	public void fileInfo(File f) throws IOException{
		// 取得文件名
		System.out.println("文件名："+f.getName());
		// 测试文件是否可以被读取
		System.out.println("文件是否可被读取："+(f.canRead()?"是":"否"));
		// 测试文件是否可以被修改
		System.out.println("文件是否可被修改："+(f.canWrite()?"是":"否"));
		// 取得文件绝对路径
		System.out.println("文件的绝对路径："+f.getAbsolutePath());
		// 取得文件长度，以字节为单位
		System.out.println("文件长度："+f.length()+"字节");
		// lastModified()方法返回从1970年1月1日起的毫秒数，对其格式化后输出
		SimpleDateFormat sdf=new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
        System.out.println("文件最后被修改时间："+sdf.format(f.lastModified()));
	}
	
	public void dirInfo(File f) throws IOException{
		System.out.println("目录名："+f.getName());
		// 得到一个字符串数组，包含该目录下的子目录及文件
		System.out.println("该目录下包含如下子目录和文件：");
		String [] dirArr = f.list();
		for(int i = 0; i < dirArr.length; i++){
			System.out.println("  "+ (i+1) + ":" + dirArr[i]);
		}
	}
	
	public static void main(String [] args) throws IOException {
		if(args.length <= 0){
			System.out.println("请通过命令行参数指定文件或目录名！");
			System.exit(0);
		}else {
			File file = new File(args[0]);
			if(file.isFile()){
				new FileExample().fileInfo(file);
			} else if(file.isDirectory()){
				new FileExample().dirInfo(file);
			} else {
				// 创建一个新文件
				file.createNewFile();
			}
		}		
	}
}