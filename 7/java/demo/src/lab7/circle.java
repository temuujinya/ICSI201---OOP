package lab7;

public class circle extends TwoDimentionalShape{
	private double r, pi=3.14159265359;
	private String name;
	public circle(float x, float y, double r, String name) {
//		this.x = x;
		setX(x);
//		this.y = y;
		setY(y);
//		this.r = r;
		setR(r);
//		this.name = name;
		setName(name);
		setArea(getR());
		setPerimeter(getR());
	}
	
	public double getPerimeter() {
		return perimeter;
	}
	
	public double getArea() {
		return area;
	}
	
	public String getName() {
		return name;
	}
	
	public double getR() {
		return r;
	}
	
	public void getX(float x) {
		// TODO Auto-generated method stub
		this.x=x;
	}
	
	public void getY(float y) {
		this.y=y;
	}



	public void setPerimeter(double r) {
		this.perimeter = 2*pi*r;
	}
	
	public void setArea(double r) {
		this.area = pi * Math.pow(r,2);
	}
	
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setR(double r) {
		this.r = r;
	}
	
	public void setX(float x) {
		this.x=x;
	}
	
	public void setY(float y) {
		// TODO Auto-generated method stub
		this.y=y;
	}
	
	
}
