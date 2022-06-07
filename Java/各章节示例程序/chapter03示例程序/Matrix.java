package sample;
public class Matrix {
   public static void main(String args[])
 {         int i,j;
           int[][]  a;
           a=new int[10][10];
		   for(i=0;i<10;i++)          /*  生成数组  */
			 for(j=0;j<10;j++)
			   if(i<5&&j<5)
				  a[i][j]=1;
			   else if(i>=5&&j>=5)
						a[i][j]=2;
					else a[i][j]=0;
		   for(i=0;i<10;i++)           /*  输出数组  */
			  {for(j=0;j<10;j++)
				 System.out.print("  " + a[i][j]);
			   System.out.println();
			  }
   } 
}