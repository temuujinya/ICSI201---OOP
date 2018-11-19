package lab9;

public class Person {
	
	protected String name;
	protected String SSnum;
	protected int Age;
	
	public String getName() {
		return name;
	}
	
	public int getAge() {
		return Age;
	}
	
	public String getSSnum() {
		return SSnum;
	}
	
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setAge(int age) {
		Age = age;
	}
	
	public void setSSnum(String sSnum) {
		SSnum = sSnum;
	}
}
