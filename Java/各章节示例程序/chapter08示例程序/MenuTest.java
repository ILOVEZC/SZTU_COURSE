/*
 * MenuTest.java
 *
 * 
 */

package sample;
import java.awt.*;
import java.awt.event.*;

class MenuTest extends Frame {
     PopupMenu pop;
     public MenuTest() {
        super("Golf Caddy");
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent evt) {
                setVisible(false);
                dispose();
                System.exit(0);
            }
        });
        this.setSize(300,300);
        this.add(new Label("Choose club."), BorderLayout.NORTH);
        
        Menu woods = new Menu("Woods");
        woods.add("1 W");
        woods.add("3 W");
        woods.add("5 W");
  
        Menu irons = new Menu("Irons");
        irons.add("3 iron");
        irons.add("4 iron");
        irons.add("5 iron");
        irons.add("7 iron");
        irons.add("8 iron");
        irons.add("9 iron");
        irons.addSeparator();
        irons.add("PW");
        irons.insert("6 iron", 3);
        
        MenuBar mb = new MenuBar();
        mb.add(woods);
        mb.add(irons);
        this.setMenuBar(mb);
        
        pop = new PopupMenu("Woods");
        pop.add("1 W");
        pop.add("3 W");
        pop.add("5 W");
        
        final TextArea p = new TextArea(100, 100);
        
        p.setBounds(0,0,100,200);
        p.setBackground(Color.green);
        p.add(pop);
        p.addMouseListener(new MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                if(evt.isPopupTrigger()) {
                        System.out.println("popup trigger");
                        System.out.println(evt.getComponent());
                        System.out.println("" + evt.getX()+ " " + evt.getY());
                        pop.show(p, evt.getX(), evt.getY());
                    }
                
                }
        });
        this.add(p, BorderLayout.CENTER);
     }
     
     public static void main (String [] args) {
        new MenuTest().setVisible(true);
     }
  }