import java.io.*;

public class DataInputExample {
	public static void main(String args[]) {
		try {
			FileInputStream fin = new FileInputStream(args[0]);
			DataInputStream dataIn = new DataInputStream(fin);
			while(fin.available() > 0){
				System.out.println(dataIn.readDouble());
			}
			dataIn.close();
			fin.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
