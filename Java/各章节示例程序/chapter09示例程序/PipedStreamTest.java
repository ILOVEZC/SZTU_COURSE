import java.io.*;
public class PipedStreamTest {
	   public static void main(String[] args) {
		   try {
			  PipedInputStream pins = new PipedInputStream();
			  PipedOutputStream pouts = new PipedOutputStream(pins);
	 	   	  byte[] outArray = {'A', 'S', 'C', 'E', 'N', 'T'};
	          pouts.write(outArray, 0, 5);
	          System.out.println("Write " + new String(outArray) + " to PipedOutputStream");
			  byte[] inArray = new byte[5];
			  pins.read(inArray, 0, 5);
			  System.out.println("Read " + new String(inArray) + " from PipedInputStream\n");
			} catch (Exception e) {
			  e.printStackTrace();
			}
	   }
}
