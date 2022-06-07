public class QueueOld {

  protected Object[] data;
  protected int writeIndex;
  protected int readIndex;
  protected int count;

  public QueueOld(int size) {
    data = new Object[size];
  }

  public  void write(Object value) {
    data[writeIndex++] = value;
    System.out.println("write data is: " + value);
    writeIndex %= data.length;
    count += 1;
  }

  public  void read() { 
    Object value = data[readIndex++];
    System.out.println("read data is: " + value);
    readIndex %= data.length;
    count -= 1;
  }

  public static void main(String[] args) {
     QueueOld q = new QueueOld(5);
     new Writer(q);
     new Reader(q); 
  }
}


class Writer implements Runnable{
  QueueOld queue;

  Writer(QueueOld target){
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
  QueueOld queue;

  Reader(QueueOld source){
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
