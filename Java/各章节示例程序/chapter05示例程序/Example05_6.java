abstract class A
{
	int x;
	abstract int m1();
	abstract int m2();
}
abstract class B extends A
{
	int y;
	int m1()
	{
		return x+y;
	}
}
class C extends B
{
	int z;
	int m2()
	{
		return x+y+z;
	}
}
