package lab7;

public class circle extends TwoDimentionalShape{
	private double r;
	private final double pi=Math.PI;
	private String name;
	public circle(float x, float y, double r, String name) {
		setX(x);
		setY(y);
		setR(r);
		setName(name);
		setArea(getR());
		setPerimeter(getR());
	}
	public void print(){
		System.out.println("Name: "+getName()
							+"\nx:"+getX()
							+"\ny:"+getY()
							+"\nRadius:"+getR()
							+"\nArea:"+getArea()
							+"\nPerimeter:"+getPerimeter());
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
	
	public float getX() {
		return x;
	}
	
	public float getY() {
		return y;
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
		this.y=y;
	}
	
	
}
