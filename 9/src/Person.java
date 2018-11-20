package lab9;

public class Person {
	
	protected String name;
	protected String SSnum;
	int Age;
	
	public Person(String name, String SSnum, int age) {
		setName(name);
		setSSnum(SSnum);
		setAge(age);
	}
	
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
