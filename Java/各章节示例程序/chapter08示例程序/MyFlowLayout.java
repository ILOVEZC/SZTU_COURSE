package sample;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class MyFlowLayout {
    private Frame f;
    private Button button1, button2, button3; 
    
    public static void main (String args[]) {
        MyFlowLayout mflow = new MyFlowLayout ();
        mflow.go();
    }
    
    public void go() {
        f = new Frame ("FlowLayout效果");
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent evt) {
                f.setVisible(false);
                f.dispose();
                System.exit(0);
            }
        });
        //f.setLayout(new FlowLayout());
        f.setLayout(new FlowLayout(FlowLayout.LEADING, 20, 20));
        button1 = new Button("第一个按钮");
        button2 = new Button("第二个按钮");
        button3 = new Button("第三个按钮");
        f.add(button1);
        f.add(button2);
        f.add(button3); 
        f.setSize (200,200);
        f.pack();
        f.setVisible(true);
  }
}
