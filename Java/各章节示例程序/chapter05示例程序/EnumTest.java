enum Day {
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
}
public class EnumTest {
	public static void main(String[] args) {
		//// 创建枚举数组
		Day[] days = new Day[] { Day.MONDAY, Day.TUESDAY, Day.WEDNESDAY,
				Day.THURSDAY, Day.FRIDAY, Day.SATURDAY, Day.SUNDAY };
		// 打印枚举常量的序号以及枚举值
		for (int i = 0; i < days.length; i++) {
			System.out.println("day[" + days[i].ordinal() + "]:"
					+ days[i].name());
		}
		// 通过compareTo方法比较,实际上其内部是通过ordinal()值比较的
		System.out.println("day[1] VS day[2]:" + days[1].compareTo(days[2]));
	}
} 
