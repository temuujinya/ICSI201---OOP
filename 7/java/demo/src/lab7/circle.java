package lab7;
public class Circle extends TwoDimensionalShape {
	protected double x[] = new double[1]; // tuhain dursni x coordinatin hemjeegeer sanah oi nootsloh 
	protected double y[] = new double[1]; // tuhain dursni y coordinatin hemjeegeer sanah oi nootsloh
	
    // Duguin baiguulach puntkts
    public Circle(double x,double y,double length,String name) 
    {
    	setX(x);
    	setY(y);
    	setLength(length);
    	setName(name);     	
    }
    
    // Duguin talbaig tootsoolon oloh
	public double areaCal() 
	{
		double pi = 3.14;
    	return pi * Math.pow(this.length,2);
    }
    
	// Duguin hureeni urtig tootsooloh
    public double primeterCal() 
    {
    	double pi = 3.14;
    	return 2 * pi * this.length;
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

     
    
}