package lab8;

public class Square extends TwoDimensionalShape {
	protected double x[] = new double[4]; // tuhain dursni x coordinatin hemjeegeer sanah oi nootsloh 
	protected double y[] = new double[4]; // tuhain dursni y coordinatin hemjeegeer sanah oi nootsloh

	
	// Parametertai baiguulach punkts
	public Square(double x,double y, double length,String name) 
	{
		setName(name);
		setLength(length);
		setX(x);
    	setY(y);
    	setX1();
    	setY1();
    	setX2();
    	setY2();
    	setX3();
    	setY3();
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
	public double getX(){
		return this.x[0];
	}

	//tuhain dursni y coordinatin utgig butsaah function
	public double getY(){
		return this.y[0];
	}
	
	// Baruun deed oroin X coordinatig utga onooh
	public void setX1() 
	{
		   this.x[1] = this.x[0] + this.length;
	}
	
	// baruun deed oroin x coordinatig butsaah
	public double getX1()
	{
		return this.x[1];
	}
	
	// baruun deed oroin Y coordinatad utga onooh
	public void setY1() 
	{
		this.y[1] = this.y[0];
	}
	
	// baruun deed oroin y coordinatig butsaah
	public double getY1()
	{
		return this.y[1];
	}
	
	
	// baruun dood oroin X coordinatid utga onooh
	public void setX2() 
	{
		   this.x[2] = this.x[0] + this.length;
	}
	
	// baruun dood oroin x coordinatig butsaah
	public double getX2()
	{
		return this.x[2];
	}
	
	// Baruun dood Y coordinatad utga onooh
	public void setY2() 
	{
		 this.y[2] = this.y[0] - this.length;
	}
	
	// baruun dood oroin y coordinatig butsaah
	public double getY2()
	{
		return this.y[2];
	}
	
	// zuun dood oroin Y coordinatad utga onooh
	public void setY3() 
	{
		 this.y[3] = this.y[0] - this.length;
	}
	
	// zuun dood oroin x coordinatig butsaah
	public double getY3()
	{
		return this.y[3];
	}
	
	// Zuun dood oroin X coordinatig utga onooh
	public void setX3() 
	{
		this.x[3] = this.x[0] ;
	}
	
	// zuun dood oroin x coordinatig butsaah
	public double getX3()
	{
		return this.x[3];
	}
	/*
	 * Талбай олох функцыг дахин тодорхойлж байна 
	  */
	@Override
	public double calcArea() {
	 return  Math.pow(this.length,2);
	}
	/*
	 * Периметер олох функцыг дахин тодорхойлж байна 
	  */
	@Override
	public double calcPerimeter() {
    	return 4 * this.length;
	}
	

}
