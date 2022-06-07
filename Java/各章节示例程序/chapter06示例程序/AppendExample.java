class AppendExample{
	public static void main(String[] args)	{
		Object o="Hello";
		String s="good bye";
		char  charArray[]={'a','b','c','d','e','f'};
		boolean b=true;
		char c='A';
		int i=7;
		long l=10000000;
		float f=2.5f;
		double d=666.666;
		StringBuffer buf=new StringBuffer();
		buf.insert(0,o).insert(0," ").insert(0,s);
		buf.insert(0," ").insert(0,charArray);
		buf.insert(0," ").insert(0,b);
		buf.append(" ").append(l).append(" ").append(f);
		buf.append(" ").append(d);
		System.out.println(buf.toString());
	}
}
