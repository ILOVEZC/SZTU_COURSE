package sample;
public class SortTest {

	public void sort(int a[]){
	    int n = a.length;
	    int t = 0;
		for (int i = n - 1; i > 0; i--) {
		  for (int j = 0; j < i; j++) {
		    if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
	        }
          }
        }
        for (int k = 0; k < a.length; k++) {
		   System.out.print(a[k]+" ");
		}
      }
       
	public static void main(String args[]){
            int nums[] = {1,4,2,7,9,6,5,8,0,3};
            SortTest st = new SortTest();
            st.sort(nums);
    }
 
}