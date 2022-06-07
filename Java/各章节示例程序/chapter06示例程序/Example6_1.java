class Example6_1 {
 public static void main( String args[] ){
      char charArray[] = { 'b', 'i', 'r', 't', 'h', ' ', 'd', 'a', 'y' };
      byte byteArray[] = { ( byte ) 'n', ( byte ) 'e', ( byte ) 'w', ( byte ) ' ', ( byte ) 'y', 
    		  ( byte ) 'e', ( byte ) 'a', ( byte ) 'r' };
      String s = new String( "hello" );
      //调用6个不同的构造函数来创建String对象
      String s1 = new String();
      String s2 = new String( s );
      String s3 = new String( charArray );
      String s4 = new String( charArray, 6, 3 );
      String s5 = new String( byteArray, 4, 4 );
      String s6 = new String( byteArray );
      System.out.println( "s1 = " + s1 + "\ns2 = " + s2 + "\ns3 = " + s3 + 
         "\ns4 = " + s4 + "\ns5 = " + s5 + "\ns6 = " + s6);
    }
}   
