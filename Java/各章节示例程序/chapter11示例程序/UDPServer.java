package sample;
import java.io.*;
import java.net.*; 
import java.util.*; 

public class UDPServer{ 
//This method retrieves the current time on the server 
   public byte[] getTime(){ 
        Date d= new Date(); 
        return d.toString().getBytes(); 
  } 
// Main server loop. 
    public void go() throws IOException { 
        DatagramSocket datagramSocket; 
        DatagramPacket inDataPacket; // Datagram packet from the client 
        DatagramPacket outDataPacket; // Datagram packet to the client 
        InetAddress clientAddress; // Client return address 
        int clientPort; // Client return port 
        byte[] msg= new byte[10]; // Incoming data buffer. Ignored. 
        byte[] time; // Stores retrieved time 
  
        // Allocate a socket to man port 8000 for requests. 
            datagramSocket = new DatagramSocket(8000); 
            System.out.println("At UDPServer,datagramSocket is: " + datagramSocket.getPort() + "local is: " + datagramSocket.getLocalPort()); 
            System.out.println("UDP server active on port 8000"); 
  
        // Loop forever 
        while(true) { 
            // Set up receiver packet. Data will be ignored. 
            inDataPacket = new DatagramPacket(msg, msg.length); 
            // Get the message. 
            datagramSocket.receive(inDataPacket); 
            // Retrieve return address information, including InetAddress 
            // and port from the datagram packet just recieved. 
            clientAddress = inDataPacket.getAddress(); 
            clientPort = inDataPacket.getPort(); 
  
            // Get the current time. 
            time = getTime(); 
  
            //set up a datagram to be sent to the client using the 
            //current time, the client address and port 
            outDataPacket = new DatagramPacket 
            (time, time.length, clientAddress, clientPort); 
  
            //finally send the packet 
            datagramSocket.send(outDataPacket); 
        } 
    } 
  
    public static void main(String args[]) { 
        UDPServer udpServer = new UDPServer(); 
        try { 
            udpServer.go(); 
        } catch (IOException e) { 
            System.out.println ("IOException occured with socket."); 
            System.out.println (e); 
            System.exit(1); 
        } 
    } 
 } 
