public class MySimpleRunnable implements Runnable {
	public void run(){
		for(int i=0; i<5; i++){
			for(int j=0; j<8; j++){
				System.out.print(Thread.currentThread().getName()+"["+j+"]  ");
			}
			System.out.println();
		}
		System.out.println("-----" + Thread.currentThread().getName() + " ends-----");
	}
	
	public static void main(String [] args){
		Thread T1 = new Thread(new MySimpleThread());
		Thread T2 = new Thread(new MySimpleThread());
		T1.start();
		T2.start();
		System.out.println("====="+Thread.currentThread().getName()+" ends=====");
	}
}