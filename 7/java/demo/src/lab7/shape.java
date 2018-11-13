package lab7;
class Shape{
   protected String name;     // tuhain dursni nergiig hadgalah gishuun ogogdol
   protected double length;    // Talbaig hadgalag gishuun ogodol
   
   // tuhain dursni nerd utga onoo function
   public void setName(String name) {
   	this.name = name;
   }
  
   // tuhain dursni nerig butsaah function
   public String getName() {
   	return this.name; 
   }

 // dursin talin urtad utga onooh 
public  void setLength(double length){
    this.length = length;
}

public double getLength()
{
 return this.length;	
}

}