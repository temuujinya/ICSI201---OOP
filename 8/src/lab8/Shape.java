package lab8;
abstract class Shape{
	//дүрсний нэрийг хадгалах гишүүн өгөгдөл
   protected String name;
   //дүрсний нэрийг хадгалах гишүүн өгөгдөл
   protected double length;
   public abstract double calcPerimeter();
   
   Shape(){
	   setName("durs");
	   setLength(1);
	   //Эх класс түрүүлж дуудаж байгаа эсэхийг шалгахын тулд тавьсан
//	   System.out.println("eh class");
   }
   
   Shape(double length,String name){
	   setName(name);
	   setLength(length);
   }
   
   // Дүрсэнд нэр олгох функц
   public void setName(String name) {
   	this.name = name;
   }
  
   // Дүрсний нэрийг буцаах функц
   public String getName() {
   	return this.name; 
   }

	 // Дүрсний талын уртад утга оноох функц
	public void setLength(double length){
	    this.length = length;
	}
	
	// Дүрсний талын уртыг буцаах
	public double getLength(){
		return this.length;	
	}

}