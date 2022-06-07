class BookingClerk {
	int remainder = 10;
	// synchronized void booking(int num){
	void booking(int num){
	if(num <= remainder){
		System.out.println("预定"+num+"张票"); 
		try{
			Thread.sleep(1000);
			remainder = remainder - num;
		} catch(InterruptedException e){
			remainder = remainder - num;
		}
	} else {
		System.out.println("剩余票不足，无法接受预定");
	}
	System.out.println("还剩"+remainder+"张票");
}
}

public class BookingTest implements Runnable{
	BookingClerk bt;
	int num;
	BookingTest(BookingClerk bt, int num){
		this.bt = bt;
		this.num = num;
		new Thread(this).start();
	}
	
	public void run(){
		bt.booking(num);
	}
	
	public static void main(String [] args){
		BookingClerk bt = new BookingClerk();
		new BookingTest(bt, 7);
		new BookingTest(bt,5);
	}
}