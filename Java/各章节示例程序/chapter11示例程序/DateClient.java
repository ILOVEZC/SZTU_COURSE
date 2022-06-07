package sample;
import java.net.*;
import java.io.*;

public class DateClient {
	public static void main(String args[]) {
		if (args.length != 1) {
			System.out.println("usage: DateClient <server-name>");
			System.exit(1);
		}
		String serverName = args[0];
		Socket s = null;
		try {
			//1.create a Socket connection
			s = new Socket(serverName, 7000);
			System.out.println("Client " +
				s);
			
			//2. Read (write) with socket
			BufferedReader reader;
			reader = new BufferedReader(
				new InputStreamReader(
					s.getInputStream()));
			System.out.println(serverName + " says " +
				reader.readLine());
		} catch (Exception e) {
			System.out.println(e);
		} finally{
		   try{
		     // 3. close connection
		     s.close();
		   }catch(Exception e) {};  
	        }
	}
}
