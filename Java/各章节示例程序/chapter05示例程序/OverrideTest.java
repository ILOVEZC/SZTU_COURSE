public class OverrideTest {
	    String name;
	    @Override
	    public String toString(){//不报错，OverrideTest的父类Object有toString方法
            return name;
	    }
	    @Override
	    public String fromString(){//报错，OverrideTest的父类Object没有fromString方法
	        return name;
	    }
}
