package lab7;

public class MainShape {
	public static void main(String[] args) {
		// tuhain circle toroltei huvisagchid parametertai baiguulachaar sanah oi nootsloh
		Circle cir = new Circle(2,2,8,"Circle");
		// Duguin gishuun ogodluud ,talbai , primeterig hevleh
		System.out.println("name : " + cir.getName()+ "\n");
		System.out.println("length   : " + cir.getLength() + "\n");
		System.out.println("x        : " + cir.getX()+ "\n");
		System.out.println("y        : " + cir.getY()+ "\n");
		System.out.println("area     : " + cir.areaCal()+ "\n");
		System.out.println("primeter : " + cir.primeterCal()+ "\n");
	
		// square toroltei huvidagchid parametertai baiguulach ashiglan sanah oi nootsloh
		Square S = new Square(10,10,8,"Square");
		// Kvadratin gishuun ogodluud, busad oroin coordinate, talbai, primeterig hevleh
		System.out.println("\n" + "name :" + S.getName()+ "\n");
		System.out.println("length        : " + S.getLength() + "\n");
		System.out.println("LeftTop x     : " + S.getX()+ "\n");
		System.out.println("LeftTop y     : " + S.getY()+ "\n");
		System.out.println("RightTop x    : " + S.getX1()+ "\n");
		System.out.println("RightTop y    : " + S.getY1()+ "\n");
		System.out.println("RightBottom x : " + S.getX2()+ "\n");
		System.out.println("RightBottom y : " + S.getY2()+ "\n");
		System.out.println("LeftBottom x  : " + S.getX3()+ "\n");
		System.out.println("LeftBottom y  : " + S.getY3()+ "\n");
		System.out.println("area          : " + S.SquareAreaCal()+ "\n");
		System.out.println("primeter      : " + S.SquarePriCal()+ "\n");
		
		// triangle toroltei huvidagchid parametertai baiguulach ashiglan sanah oi nootsloh
		Triangle Tri = new Triangle(6,6,4,"Triangle");
		// Zov gurvaljini gishuun ogodluud, busad oroin coordinate, talbai, primeterig hevleh
		System.out.println("\n" + "name            : " + Tri.getName() + "\n");
		System.out.println("length          : " + Tri.getLength() + "\n");
		System.out.println("Top x           : " + Tri.getX() + "\n");
		System.out.println("Top y           : " + Tri.getY() + "\n");
		System.out.println("LeftBottom x    : " + Tri.getX1() + "\n");
		System.out.println("LeftBottom y    : " + Tri.getY1() + "\n");
		System.out.println("RightBottom x   : " + Tri.getX2() + "\n");
		System.out.println("RightBottom y   : " + Tri.getY2() + "\n");
		System.out.println("Triangle Area   : " + Tri.TriangleAreaCal() + "\n");
		System.out.println("Triagle Pri     : " + Tri.TrianglePriCal() + "\n");
//		
		
	}
	
	

}
