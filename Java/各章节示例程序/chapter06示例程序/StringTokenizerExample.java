import java.util.StringTokenizer;
 class StringTokenizerExample {
  static String in = "title=Mastering Core Java;" +
    "author=Lixin;" +
    "publisher=Publishing House of Electronic Industry;" +
    "copyright=2007";
  public static void main(String args[]) {
    StringTokenizer st = new StringTokenizer(in, "=;");
    while(st.hasMoreTokens()) {
      String key = st.nextToken();
      String val = st.nextToken();
      System.out.println(key + "\t" + val);
    }
  }
}
