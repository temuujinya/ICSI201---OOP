package lab9;

import java.util.Date;

public class Program {

	public static void main(String[] args) {
		Division it = new Division("Information Technology");
		Division fn = new Division("Finance");
		Division marketing = new Division("Marketing");
		
		
		JobDescription softwareEngineer = new JobDescription("Software engineer");
		JobDescription financer = new JobDescription("Financier");
		JobDescription socialMarketing = new JobDescription("Social marketing");
		
		
		Child child1 = new Child("Oogii", "C156", 20, "Barbey");
		Child child2 = new Child("Bold", "C157", 13, "Cars");
		Child child3 = new Child("Jamuha", "C158", 13, "Helicopter");
		Child child4 = new Child("Aami", "C159", 13, "Tami");
		
		
		Spouse spouse1 = new Spouse("Chimgee", "S2019", 23, "2018-07-15");
		Spouse spouse2 = new Spouse("Emuujin", "S2020", 23, "2018-07-15");
		Spouse spouse3 = new Spouse("Undeg", "S2021", 23, "2018-07-15");
		
		
		
		Employee bat = new Employee("Bat","E560",25,"0205","Apple",new Date(System.currentTimeMillis()),it,softwareEngineer);
			bat.setDivision(it);
//			bat.addJob(softwareEngineer);
			bat.addChild(child1);
			bat.addChild(child4);
			bat.setSpouse(spouse1);
		Employee bold = new Employee("Bold","E561",50,"0206","Microsoft",new Date(System.currentTimeMillis()),marketing,socialMarketing);
			bold.setDivision(marketing);
//			bold.addJob(socialMarketing);
			bold.addChild(child2);
			bold.addChild(child3);
			bold.setSpouse(spouse2);
		Employee gerel = new Employee("Gerel","E562",40,"0207","Samung",new Date(System.currentTimeMillis()),fn,financer);
			gerel.setDivision(fn);
//			gerel.addJob(financer);
			gerel.addChild(child1);
			gerel.addChild(child2);
			gerel.addChild(child3);
			gerel.setSpouse(spouse3);

		//		Employee zoloo = new Employee();
//		bat.setDivision(it);
			
		bold.printAll();
		
//		System.out.println(bat.getDivision().getDivisionName());
//		bat.setDivision(it);
//		System.out.println(bat.getDivision().getDivisionName());
//		bat.setDivision(fn);
//		System.out.println(bat.getDivision().getDivisionName());
//		bat.addJob(softwareEngineer);
//		
//		System.out.println("start date"+bat.getStartDate());
//		System.out.println(bat.getJob().size());
//		
//		for(int i=0; i<bat.getJob().size();i++) {
//			System.out.println(bat.getJob().get(i));
//		}
		
	}

}
