package sample;

import java.awt.*;
import java.util.*;
import java.awt.event.*;

 public class MyGridBagLayout extends Panel {

     protected void makebutton(String name,
                               GridBagLayout gridbag,
                               GridBagConstraints c) {
         Button button = new Button(name);
         gridbag.setConstraints(button, c);
         add(button);
     }

     public void go() {
         GridBagLayout gridbag = new GridBagLayout();
         GridBagConstraints c = new GridBagConstraints();

         setFont(new Font("Helvetica", Font.PLAIN, 14));
         setLayout(gridbag);

         c.fill = GridBagConstraints.BOTH;
         c.weightx = 1.0;
         makebutton("Button001", gridbag, c);
         makebutton("Button2", gridbag, c);
         makebutton("Button3", gridbag, c);

            c.gridwidth = GridBagConstraints.REMAINDER; //end row
         makebutton("Button4", gridbag, c);

         c.weightx = 0.0;           //reset to the default
         makebutton("Button5", gridbag, c); //another row

        c.gridwidth = 2; //GridBagConstraints.RELATIVE; //next-to-last in row
         makebutton("Button6", gridbag, c);

        c.gridwidth = GridBagConstraints.REMAINDER; //end row
         makebutton("Button007", gridbag, c);

        c.gridwidth = 1;              //reset to the default
        c.gridheight = 2;
         c.weighty = 1.0;
         makebutton("Button8", gridbag, c);

         c.weighty = 1.0;           //reset to the default
        c.gridwidth = GridBagConstraints.REMAINDER; //end row
        c.gridheight = 1;           //reset to the default
         makebutton("Button9", gridbag, c);
         makebutton("Button10", gridbag, c);

         setSize(300, 100);
     }

     public static void main(String args[]) {
        final Frame f = new Frame("GridBagLayout бнЪО");
           f.addWindowListener(new WindowAdapter(){
                public void windowClosing(WindowEvent evt) {
                    f.setVisible(false);
                    f.dispose();
                    System.exit(0);
                }
            });
        MyGridBagLayout gb = new MyGridBagLayout();

        gb.go();

        f.add("Center", gb);
        f.pack();
        f.setVisible(true);
     }
 }
