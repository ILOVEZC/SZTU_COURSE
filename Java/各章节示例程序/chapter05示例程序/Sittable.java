interface Sittable
{
	void sit();
}
interface Lie
{
	void sleep();
}
interface HealthCare
{
	void massage();
}
class Chair implements Sittable
{
	public void sit(){};
}
/*interface Sofa extends Sittable,Lie    //接口可以实现多重继承，用逗号相隔。
{
}*/
class Sofa extends Chair implements Lie,HealthCare//一个类既可以从父类中继承同时又可以实现多个接口。
{
	public void sleep(){};
	public void massage(){};
}
