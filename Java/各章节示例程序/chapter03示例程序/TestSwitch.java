//compile : javac --enable-preview --release 12  TestSwitch.java
//run: java --enable-preview TestSwitch

public class TestSwitch {
  
   /**
    * @param k to be switched upon.
    */
  static void howMany(int k) {
      switch (k)
      {
         case 1 -> System.out.println("one");
         case 2 -> System.out.println("two");
         case 3 -> System.out.println("many");
      }
    }

   public static void demonstrateHowMany() {
      howMany(1);
      howMany(2);
      howMany(3);
    }

   /**
    * @param letter to be switched upon.
    */
   public static void demonstrateLeter(String letter) {
     
     int i = switch (letter) {
		case "A", "B", "C" -> {
			break 1;
		}
		case "D" -> {
			break 2;
		}
		case "E", "F" -> {
			break 3;
		}
		case "G" -> {
			break 4;
		}
		default -> {
			break 5;
		}
     };
    System.out.println("test i=" + i);
   }

   public static void main(final String[] arguments) {
      demonstrateHowMany();
      demonstrateLeter("E");
   }

}



