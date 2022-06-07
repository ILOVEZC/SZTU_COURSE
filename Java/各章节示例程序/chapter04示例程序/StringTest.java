package sample;
class StringTest{
    private String s;
    public void printString(){
        System.out.println(s);
    }

    public void changeString(String str){
        s = str;
    }

    public static void main(String[] args){
       StringTest st = new StringTest ();
       st.changeString("Hello Lixin");
       st.printString();
    } 
}
