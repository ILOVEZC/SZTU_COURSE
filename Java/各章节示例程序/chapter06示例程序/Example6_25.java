package sample;
import java.util.*;
public class Example6_25 {
	public static void getData(List<?> data) {
		System.out.println("data :" + data.get(0));
	}
	public static void main(String[] args) {
		List<String> name = new ArrayList< >();
		List<Integer> age = new ArrayList< >();
		name.add("Java");
		age.add(2);
		getData(name);
		getData(age);
	}
}
