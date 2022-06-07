package sample;
import java.net.*;
import java.io.*;
import java.util.Date;

public class DateServer {

	//int port;
	//ServerSocket serverSocket;
	
	public DateServer(int port) throws Exception {
		//serverSocket = new ServerSocket(port);
	}
	
	public static void main(String[] args) {
	//public void run() throws Exception {
		//while (true) {
		 ServerSocket ServerSocket1 = null;
		 Socket clientSocket = null;
		 try{	
			//DateServer ds = new DateServer(7000);
			System.out.println("Waiting for a connection...");
			
			//1. create a socket (accept)
			ServerSocket1 = new ServerSocket(7000);
			clientSocket = ServerSocket1.accept();
			System.out.println("Connected to " +
				clientSocket);
			
			//2. write(read) data
			PrintWriter out = new PrintWriter(
				new OutputStreamWriter(
					clientSocket.getOutputStream()));
			Date date = new Date();
			out.println(date.toString());
			out.close();
		//}
		}catch(Exception e) {}
		finally{
		     try{
		      
		      //3. close connection
		      ServerSocket1.close();
		      clientSocket.close();
	             }catch(Exception e) {}
	        }
	}
}
