package sample;
import java.util.Arrays;
public class ArraysTest {
	public static void main(String args[]) {
		int[] a1 = new int[] { 1, 2, 3, 4 };
		int[] a2 = new int[] { 1, 2, 3, 4 };
		// 1、比较方法
		System.out.println("a1==a2?:" + Arrays.equals(a1, a2));// 比较数组元素
		// 2、复制方法copyOf、copyOfRange
		int[] b1 = Arrays.copyOf(a1, 5);// 复制a1数组，产生新数组b，未赋值的元素后面补0
		int[] b2 = Arrays.copyOfRange(a1, 2, 4);// 有范围复制,前闭后开
		// 3、toString方法
		System.out.println("b1：" + Arrays.toString(b1));
		System.out.println("b2：" + Arrays.toString(b2));
		// 4、赋值方法fill
		Arrays.fill(b1, 0, 2, 5); // 有范围赋值，表示将[0,2)之间的元素赋值为5
		Arrays.fill(b2, 5); // 全部赋值，b2所有元素赋值为5
		System.out.println("有范围赋值--b1：" + Arrays.toString(b1));
		System.out.println("全部赋值--b2：" + Arrays.toString(b2));
		// 5、排序方法sort，默认升序
		Arrays.sort(b1, 0, 4); // 有范围排序，排序[0,4)之间的元素
		System.out.println("有范围排序--b1：" + Arrays.toString(b1));
		Arrays.sort(b1);// 全排序
		System.out.println("全排序--b1：" + Arrays.toString(b1));
		// 查询方法binarySearch，数组必须已经是升序排列，如果存在值，则返回该值，若不存在，返回负数
		System.out.println(Arrays.binarySearch(b1, 4)); // 全部搜索，搜索数组中元素
		System.out.println(Arrays.binarySearch(b1, 0, 3, -13)); // 有范围搜索，搜索数组中[0,3)之间的元素
	}
}
