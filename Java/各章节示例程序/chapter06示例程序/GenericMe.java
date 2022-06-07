public class GenericMe {                         
	public static <E> void genericMethods(E[] arrays) {
		// 输出数组元素 < E >
		for (E array : arrays) {
			System.out.print(array + ",");
		}
	}

	public static void main(String args[]) {
		// 创建不同类型的数组，Integer和String类型
		Integer[] intArray = { 1, 2, 3, 4, 5 };
		String[] stringArray = { "one", "two", "three", "four", "five" };

		System.out.println("整型数组元素为:");
		genericMethods(intArray); // 输出整型数组

		System.out.println("\n字符串型数组元素为:");
		genericMethods(stringArray); // 输出字符串型数组
	}
}
