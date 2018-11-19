package lab8;
public class Circle extends TwoDimensionalShape {
	double pi = 3.14;
    // Duguin baiguulach puntkts
    public Circle(double x,double y,double length,String name) 
    {
		x= new double[1]; 
		y= new double[1];
    	setX(x);
    	setY(y);
    	setLength(length);
    	setName(name);     	
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

	@Override
	public double calcArea() {
		return pi * Math.pow(this.length,2);
	}

	@Override
	public double calcPerimeter() {
    	return 2 * pi * this.length;
	}

     
    
}