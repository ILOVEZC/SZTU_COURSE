import java.util.*;
public class HashMapExample{
	public static void main(String[] args){
		//创建了HashMap对象
		HashMap hm=new HashMap();
		//向HashMap对象中添加内容不同的键值对
		hm.put(1,"A");
		hm.put(3,"B");
		hm.put(4,"C");
		hm.put(2,"D");
		hm.put(5,"E");
		System.out.println("添加元素后的结果为： ");
		System.out.println(hm);
		//移除了HashMap对象中键为97001的值
		hm.remove(3);
		//替换键值97002对应的值
		hm.put(4,"F");
		//打印输出HashMap[中的内容
		System.out.print("删除和替换元素后结果为：");
		System.out.println(hm);
		//取出指定键对应的值
		Object o=hm.get(2);//使用了自动打包功能
		String s=(String)o;
		System.out.println("键2对应的值为："+s);
		}
}
