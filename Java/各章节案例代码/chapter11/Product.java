package chapter11;

/**
 * 实体类Product，用来描述商品的信息类
 * @author ascent
 * @version 1.0
 */
@SuppressWarnings("serial")
public class Product implements java.lang.Comparable, java.io.Serializable {

	private String productname; // 药品名称

	private String cas; // 化学文摘登记号

	private String structure; // 结构图名称

	private String formula; // 公式

	private String price; // 价格

	private String realstock; // 数量

	private String category; // 类别
	
	/**
	 * 默认构造方法
	 */
	public Product() {
	}

	/**
	 * 带所有参数构造方法
	 * @param productName 药品名称
	 * @param cas 化学文摘登记号
	 * @param structure 结构图名称
	 * @param formula 公式
	 * @param price 价格
	 * @param realstock 数量
	 * @param category 类别
	 */
	public Product(String productName, String cas, String structure,
			String formula, String price, String realstock, String category) {
		this.productname = productName;
		this.structure = structure;
		this.formula = formula;
		this.price = price;
		this.realstock = realstock;
		this.cas = cas;
		this.category = category;
	}

	/**
	 * @return the cas
	 */
	public String getCas() {
		return cas;
	}

	/**
	 * @param cas the cas to set
	 */
	public void setCas(String cas) {
		this.cas = cas;
	}

	/**
	 * @return the category
	 */
	public String getCategory() {
		return category;
	}

	/**
	 * @param category the category to set
	 */
	public void setCategory(String category) {
		this.category = category;
	}

	/**
	 * @return the formula
	 */
	public String getFormula() {
		return formula;
	}

	/**
	 * @param formula the formula to set
	 */
	public void setFormula(String formula) {
		this.formula = formula;
	}

	/**
	 * @return the price
	 */
	public String getPrice() {
		return price;
	}

	/**
	 * @param price the price to set
	 */
	public void setPrice(String price) {
		this.price = price;
	}

	/**
	 * @return the productname
	 */
	public String getProductname() {
		return productname;
	}

	/**
	 * @param productname the productname to set
	 */
	public void setProductname(String productname) {
		this.productname = productname;
	}

	/**
	 * @return the realstock
	 */
	public String getRealstock() {
		return realstock;
	}

	/**
	 * @param realstock the realstock to set
	 */
	public void setRealstock(String realstock) {
		this.realstock = realstock;
	}

	/**
	 * @return the structure
	 */
	public String getStructure() {
		return structure;
	}

	/**
	 * @param structure the structure to set
	 */
	public void setStructure(String structure) {
		this.structure = structure;
	}

	@Override
	public String toString() {
		return this.getProductname() + "    CAS：" + this.getCas();
	}

	public int compareTo(Object o) {
		Product product = (Product) o;
		return this.getProductname().compareTo(product.getProductname());
	}
}
