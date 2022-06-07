import java.io.*; 
import java.util.*; 

public class RandomAccessFileExam { 
    public static void main(String[] args) { 
        Student[] students = { 
            new Student("Tom",   90), 
            new Student("Rose",  95), 
            new Student("Jerry", 88), 
            new Student("Jack",  84)
        }; 
        try { 
            File file = new File(args[0]); 
            // 以读写模式建立RandomAccessFile对象
            RandomAccessFile randomAccessFile = 
                new RandomAccessFile(file, "rw"); 
            for(int i=0; i<students.length; i++) { 
                // 写入数据 
                randomAccessFile.writeChars(students[i].getName()); 
                randomAccessFile.writeInt(students[i].getScore()); 
            } 
            Scanner scanner = new Scanner(System.in); 
            System.out.print("读取第几条学生记录？"); 
            
            int num = scanner.nextInt(); 
            // 使用seek()方法操作存取位置 
            randomAccessFile.seek((num-1) * Student.size()); 
            Student student = new Student(); 
            // 读出数据 
            student.setName(readName(randomAccessFile)); 
            student.setScore(randomAccessFile.readInt()); 
            System.out.println("姓名：" + student.getName()); 
            System.out.println("分数：" + student.getScore()); 
            // 关闭文件 
            randomAccessFile.close(); 
        } catch(ArrayIndexOutOfBoundsException e) { 
            System.out.println("请指定文件名称"); 
        } catch(IOException e) { 
            e.printStackTrace(); 
        } 
    }
     
    private static String readName(RandomAccessFile randomAccessfile) 
        throws IOException { 
        char[] name = new char[15]; 
        for(int i = 0; i < name.length; i++){
            name[i] = randomAccessfile.readChar(); 
        }
        // 将空字符取代为空格符并返回 
        return new String(name).replace('\0', ' '); 
    } 
} 
