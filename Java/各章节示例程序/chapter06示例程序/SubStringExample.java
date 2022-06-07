class SubStringExample{
	public static void main(String[] args)	{
		String s="hello Java”Ô—‘";
		int n1=s.indexOf('a');
		int n2=s.indexOf("a”Ô");
		System.out.println("n1="+n1+" n2="+n2);
		char c=s.charAt(2);
		String s1=s.substring(6,10);
		String s2=s.substring(4,7);
		System.out.println("c="+c+" s1="+s1+" s2="+s2);
	}
}
