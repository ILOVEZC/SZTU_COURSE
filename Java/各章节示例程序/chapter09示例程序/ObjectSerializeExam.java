import java.io.*;
/**
 * 员工类，可序列化
 */
class Employee implements Serializable{
	int employeeId_;
	String name_;
	int age_;
	String department_;
	public Employee(int employeeId, String name, 
					int age, String department){
		this.employeeId_ = employeeId;
		this.name_ = name;
		this.age_ = age;
		this.department_ = department;
	}
	
	public void showEmployeeInfo(){
		System.out.println("employeeId:" + employeeId_);
		System.out.println("name:" + name_);
		System.out.println("age:" + age_);
		System.out.println("department:" + department_);
		System.out.println("-----信息输出完毕-----");
	}
}
/**
 * 对可序列化对象操作
 */
public class ObjectSerializeExam{
	public static void main(String [] args){
		// 建立两个员工对象
		Employee e1 = new Employee(100101,"Tom",41,"HR");
		Employee e2 = new Employee(100102,"Jerry",22,"Sales");
		try{
			// 建立对象输出流将对象写出到文件employee.data
			FileOutputStream fos = new FileOutputStream("employee.data");
			ObjectOutputStream oos = new ObjectOutputStream(fos);			
			oos.writeObject(e1);
			oos.writeObject(e2);
			oos.close();
			// 建立对象输入流将对象从文件employee.data中还原
			FileInputStream fis = new FileInputStream("employee.data");
			ObjectInputStream ois = new ObjectInputStream(fis);
			e1 = (Employee)ois.readObject();
			e2 = (Employee)ois.readObject();
			ois.close();
			// 显示对象信息
			e1.showEmployeeInfo();
			e2.showEmployeeInfo();
		} catch(Exception ex){
			ex.printStackTrace();
		}
	}
}