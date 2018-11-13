package lab7;

import java.lang.Math;

public class Triangle extends TwoDimensionalShape  {
	protected double x[] = new double[3]; // tuhain dursni x coordinatin hemjeegeer sanah oi nootsloh 
	protected double y[] = new double[3]; // tuhain dursni y coordinatin hemjeegeer sanah oi nootsloh
	
	public Triangle(double x,double y,double length,String name)
	{
		setName(name);
		setLength(length);
		setX(x);
		setY(y);
		setX1();
		setY1();
		setX2();
		SetY2();		
	}
	
	// Zov gurvaljini talbaig tootsooloh
	public double TriangleAreaCal()
	{
		double x;
		x = Math.toRadians(60);
		double area = (Math.pow(this.length, 2) * Math.sin(x))/2;
		return area;
	}
	
	public double TrianglePriCal()
	{
		return 3 * this.length;
	}
	
	// tuhain dursni x coordinated utga onoo function
		public void setX(double x)
		{
		    this.x[0] = x;
		}

		//tuhain dursni y coordinated utga onoo function
		public void setY(double y)
		{
		    this.y[0] = y;
		}

		//tuhain dursni x coordinatin utgig butsaah function
		public double getX()
		{
			return this.x[0];
		}

		//tuhain dursni y coordinatin utgig butsaah function
		public double getY()
		{
			return this.y[0];
		}

	    
	
	// Zuun dood oroin X coordinatad utga onooh
	public void setX1()
	{
		this.x[1] = this.x[0] - (this.length)/2;
	}

	// Zuun dood oroin X coordinatig tootsooloh
	public double getX1()
	{
		return this.x[1];
	}
	
	// Zuun dood oroin X coordinatad utga onooh
	public void setY1()
	{
		double h;
		h = Math.pow(this.length, 2) - Math.pow((this.length/2), 2);
		h = Math.sqrt(h);
		this.y[1] = this.y[0] - h;
	}

	// Zuun dood oroin X coordinatig tootsooloh
	public double getY1()
	{
		return this.y[1];
	}
	
	// baruun dood oroin X coordinatad utga onooh
	public void setX2()
	{
		this.x[2] = this.x[0] + (this.length)/2;
	}
	
	// baruun dood oroin X coordinatig tootsooloh
	public double getX2()
	{
		return this.x[2];
	}

	// Baruun dood oroin y coordinatig tootsooloh
	public void SetY2()
	{
		double h;
		h = Math.pow(this.length, 2) - Math.pow((this.length/2), 2);
		h = Math.sqrt(h);
		this.y[2] = this.y[0] - h;
	}
	
	// baruun dood oroin Y coordinatig tootsooloh
	public double getY2()
	{
		return this.y[2];
	}
		
	
}
