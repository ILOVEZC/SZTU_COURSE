package sample;
class MultiArrayTest {
  public static void main(String args[]) {
     int[][] mXnArray = {
          {16, 7, 12},
          {9, 20, 18},
          {14, 11, 5},
          {8, 5, 10}
     };

     int min = mXnArray[0][0];
     for (int i = 0; i < mXnArray.length; ++i)
         for (int j = 0; j < mXnArray[i].length; ++j)
             min = Math.min(min, mXnArray[i][j]);
     System.out.println("Minimum value: " + min);

  }
}
