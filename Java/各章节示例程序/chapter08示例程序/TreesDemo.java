package sample;
import java.awt.*;
  import java.awt.event.*;
  import javax.swing.*;
  import javax.swing.tree.*;
  class Branch{
     DefaultMutableTreeNode r; 
//DefaultMutableTreeNode是树的数据结构中的通用节点,节点也可以有多个子节点。
    public Branch(String[] data){
       r=new DefaultMutableTreeNode(data[0]);
       for(int i=1;i<data.length;i++)
       r.add(new DefaultMutableTreeNode(data[i])); 
        //给节点r添加多个子节点
    }
    public DefaultMutableTreeNode node(){//返回节点
       return r;
    }
  }
  public class TreesDemo extends JPanel{
    String [][]data={
            {"Colors","Red","Blue","Green"},
            {"Flavors","Tart","Sweet","Bland"},
            {"Length","Short","Medium","Long"},
            {"Volume","High","Medium","Low"},
            {"Temperature","High","Medium","Low"},
            {"Intensity","High","Medium","Low"}
            };
    static int i=0; //i用于统计按钮点击的次数
    DefaultMutableTreeNode root,child,chosen;
    JTree tree;
    DefaultTreeModel model;
    public TreesDemo(){
       setLayout(new BorderLayout());
       root=new DefaultMutableTreeNode("root"); //根节点进行初始化
       tree=new JTree(root); //树进行初始化，其数据来源是root对象
       add(new JScrollPane(tree)); //把滚动面板添加到Trees中
       model=(DefaultTreeModel)tree.getModel(); //获得数据对象DefaultTreeModel
       JButton test=new JButton("Press me"); //按钮test进行初始化
       test.addActionListener(new ActionListener(){ //按钮test注册监听器
          public void actionPerformed(ActionEvent e){
          if (i<data.length){ //按钮test点击的次数小于data的长度
              child=new Branch(data[i++]).node(); //生成子节点
              chosen=(DefaultMutableTreeNode) //选择child的父节点
              tree.getLastSelectedPathComponent();
              if(chosen==null){
              	chosen=root;
              } 
              model.insertNodeInto(child,chosen,0); //把child添加到chosen
          }
       }
    });
    test.setBackground(Color.blue); //按钮test设置背景色为蓝色
    test.setForeground(Color.white); //按钮test设置前景色为白色
    JPanel p=new JPanel(); //面板p初始化
    p.add(test); //把按钮添加到面板p中
    add(p,BorderLayout.SOUTH); //把面板p添加到Trees中
  }
  public static void main(String args[]){
    JFrame jf=new JFrame("JTree demo");
    //把Trees对象添加到JFrame对象的中央
    jf.getContentPane().add(new TreesDemo(), BorderLayout.CENTER);  
    jf.setSize(200,500);
    jf.setVisible(true);
  }
 }
