package lab9;

public class JobDescription {
	
	protected String Description;
	
	public JobDescription() {
		setDescription("default");
	}
	
	public JobDescription(String Description) {
		setDescription(Description);
	}
	public String getDescription() {
		return Description;
	}
	
	public void setDescription(String description) {
		Description = description;
	}

}
