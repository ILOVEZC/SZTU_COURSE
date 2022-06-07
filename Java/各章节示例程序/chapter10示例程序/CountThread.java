package sample;

public class CountThread {

		public static void main(String[] args) {
			MyTask[] threads=new MyTask[10];
			//创建十个线程，并启动线程
			for(int i=0;i<10;i++){
						threads[i]=new MyTask(i*10);			
						threads[i].start();			
			}
			//等待所有线程结束后再统计和
			boolean isend=false;
			while(!isend){
				isend=true;			
				for( int i=0;i<10;i++){
					if(threads[i].isAlive()) isend=false;
				}
			}
			//创建的线程全部结束后，才能输出和
			System.out.println("sum="+MyTask.sum);
		}
}
class MyTask extends Thread{
		public static int sum=0;	
		private int initial;
		MyTask(int n){
			this.initial = n;
		}
		public void run(){
			for(int i=1;i<=10;i++){	
				MyTask.sum+=initial+i;			
			}
		}
}
	