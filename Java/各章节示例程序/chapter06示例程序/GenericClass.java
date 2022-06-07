package sample;
public class GenericClass <T> {                        
		  private T t;
		  public void print(T t) {
			System.out.println(t);
		}
		 
		  public static void main(String[] args) {
		    GenericClass<Integer> integervar = new GenericClass< >();
		    GenericClass<String> stringvar = new GenericClass< >();
		    
		    integervar.print(new Integer(3));
		    stringvar.print(new String("three"));
		  }		
}
