package sample;
public class IfElseDemo {
      
	public void judge(int score){
		  char grade;  
		  if (score>=90)   /*用关系表达式判断该成绩是否高于90分*/
              grade='A';
           else  if (score>=80)   
              grade='B';
           else  if (score>=70)   
              grade='C';
           else  if (score>=60)   
              grade='D';
           else  
               grade='E';
            System.out.println("Grade = "+grade);
	}
	
	public static void main(String args[]){
		IfElseDemo ifd = new IfElseDemo();
		ifd.judge(87);
	
	}      
 }