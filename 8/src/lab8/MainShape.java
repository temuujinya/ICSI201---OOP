package lab8;


public class MainShape {
	public static void main(String[] args) {
		
		TwoDimensionalShape[] shape = new TwoDimensionalShape[10];
		
		for(int i=0;i<10;i++){

			int randomNumber = (int) (Math.random()*3+1);
			double rLength = Math.random()*50+1;
			
			switch(randomNumber){
				case 1: 
					shape[i] = new Circle(1,1,rLength,"Circle-"+(int)rLength);break;
				case 2: 
					shape[i] = new Triangle(1,1,rLength,"Triangle-" + (int)rLength); break;
				case 3: 
					shape[i] = new Square(1,1,rLength,"Square-" + (int)rLength); break;
			}
		}
		
	  for (int i = 0; i < 10 - 1; i++)  
        {  
            int index = i;  
            for (int j = i + 1; j < shape.length; j++){  
                if (shape[j].calcArea() < shape[index].calcArea()){  
                    index = j;//searching for lowest index  
                }  
            }  
            TwoDimensionalShape smaller = shape[index];   
            shape[index] = shape[i];  
            shape[i] = smaller;  
        }  
		
		for(int i=0;i<10;i++){
			System.out.println(shape[i].getName()+" "+shape[i].calcArea()+"\n");
		}
		
	}
	
	

}
