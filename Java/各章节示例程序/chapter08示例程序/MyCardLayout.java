package sample;

import java.awt.*;
import java.awt.event.*;
public class MyCardLayout {
   public static void main(String args[]) {
        new MyCardLayout().go();
   }
   
   public void go() {
        final Frame f = new Frame("CardLayout—› æ");
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent evt) {
                f.setVisible(false);
                f.dispose();
                System.exit(0);
            }
        });
        
        f.setSize(300, 100);
        f.setLayout(new CardLayout());
  
        final Frame f1 = f;
        for(int i = 1; i <= 5; ++i) {
           Button b = new Button("Button " + i);
           b.setSize(100, 25);
           b.addActionListener(new ActionListener() {
              public void actionPerformed(ActionEvent ae) {
                 CardLayout cl = (CardLayout)f1.getLayout();
                 cl.next(f1);
              }
           } );
           f.add(b, "button" + i);
        }
        f.setVisible(true);
     }
}
