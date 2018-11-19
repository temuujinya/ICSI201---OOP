package lab9;

public class Division {

	private String DivisionName;
	
	public Division() {
		setDivisionName("default");
	}
	
	public Division(String DivisionName) {
		setDivisionName(DivisionName);
	}
	
	public String getDivisionName() {
		return DivisionName;
	}
	
	public void setDivisionName(String divisionName) {
		DivisionName = divisionName;
	}
	
}
