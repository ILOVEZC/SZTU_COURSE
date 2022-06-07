class IndexOfExample{
	public static void main(String[] args)	{
		String letters="abcdefghabcdefgh";
		System.out.println("'c'is located at index "+letters.indexOf('c'));
    	System.out.println("'a'is located at index "+letters.indexOf('a',1));
		System.out.println("last'a'is located at index "+letters.lastIndexOf('a',10));
	}
}
