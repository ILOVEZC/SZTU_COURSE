public class Queue {

  protected Object[] data;
  protected int writeIndex;
  protected int readIndex;
  protected int count;

  public Queue(int size) {
    data = new Object[size];
  }

  public synchronized void write(Object value) {
    while(count >= data.length) {
      try{
        wait();
      }catch(InterruptedException e) {}
    }
    data[writeIndex++] = value;
    System.out.println("write data is: " + value);
    writeIndex %= data.length;
    count += 1;
    notify();
  }

  public synchronized void read() {
    while(count <= 0){
      try{
        wait();
      }catch(InterruptedException e) {}
    }
    Object value = data[readIndex++];
    System.out.println("read data is: " + value);
    readIndex %= data.length;
    count -= 1;
    notify();
  }

  public static void main(String[] args) {
     Queue q = new Queue(5);
     new Writer(q);
     new Reader(q); 
  }

}


class Writer implements Runnable{
  Queue queue;

  Writer(Queue target){
     queue = target;
     new Thread(this).start();
  }

  public void run(){
     int i = 0;
     while(i < 100){
       queue.write(new Integer(i));
       i++;
     }
  }
}

class Reader implements Runnable{
  Queue queue;

  Reader(Queue source){
    queue = source;
    new Thread(this).start();
  }

  public void run(){
  	int i = 0;
    while(i < 100){
      queue.read();
      i++;
    }
  }
}
