package sample;
import java.awt.*;
import java.awt.event.*;

public class MyGridLayout { 
    private Frame f;
    private Button[] btn; 

    public static void main(String args[]) {
        MyGridLayout grid = new MyGridLayout(); 
        grid.go();
    }

    public void go() {
        f = new Frame("GridLayout—› æ");
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent evt) {
                f.setVisible(false);
                f.dispose();
                System.exit(0);
            }
        });
        
        f.setLayout (new GridLayout (3, 3, 10, 10));
        btn = new Button[9];
        for(int i = 0; i <=8; i++) {
            int j = i + 1;
            btn[i] = new Button("" + j);
            f.add(btn[i]);
        }
        
       // f.pack();
       f.setSize(100, 100);
       f.setVisible(true);
    } 
}
