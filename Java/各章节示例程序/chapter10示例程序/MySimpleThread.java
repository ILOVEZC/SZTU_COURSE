public class MySimpleThread extends Thread {
	public void run(){
		for(int i=0; i<5; i++){
			for(int j=0; j<8; j++){
				System.out.print(getName()+"["+j+"]  ");
			}
			System.out.println();
		}
		System.out.println("-----" + getName() + " ends-----");
	}
	
	public static void main(String [] args){
		Thread thread1 = new MySimpleThread();
		thread1.setName("T1");
		Thread thread2 = new MySimpleThread();
		thread2.setName("T2");
		thread1.start();
		thread2.start();
		System.out.println("====="+Thread.currentThread().getName()+" ends=====");
	}
}