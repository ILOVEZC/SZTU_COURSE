        private interface DefaultImplementation {
	        default void implementmethod() {
	            System.out.println("default implementation");
	        }
	        static void staticmethod() {
	            System.out.println("static implemetation");
	        }
	        private  void privatemethod(){
	            System.out.println("private  implemetation");
	        }
	        private static void privatestaticmethod(){
	            System.out.println("private static implemetation");
	        }

	    }

	    private static class DefaultableImpl implements DefaultImplementation {

	    }
	    private static class OverridableImpl implements DefaultImplementation {
	        public void implementmethod() {
	            System.out.println("override default implementation");
	        }
	        public   void privatemethod(){
	            System.out.println("override private implemetation");
	        }

	    }
	    public static void main(String[] args) {
	        DefaultableImpl dimpl = new DefaultableImpl();
	        OverridableImpl oimpl = new OverridableImpl();
	        dimpl.implementmethod();
	        oimpl.implementmethod();
	        oimpl.privatemethod();
	        DefaultImplementation.staticmethod();
	        DefaultImplementation.privatestaticmethod();
	    }
