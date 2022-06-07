package chapter11;

import java.io.IOException;

public class StartRegistFrame {
	public static void main(String[] args) {
		RegistFrame rf;
		try {
			rf = new RegistFrame();
			rf.setVisible(true);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
