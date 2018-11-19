package lab9;

import java.util.Date;
import java.util.Vector;

public class Employee extends Person{
	protected String CompanyID;
	protected String Title;
	protected Date StartDate;
	
	protected Division division;
	protected Spouse spouse;
	protected Vector<Child> child;
	protected Vector<JobDescription> job;
	
	
	public Employee() {
		JobDescription newjob= new JobDescription();
		Division newdiv = new Division();
		Spouse spouse = new Spouse();
		
		addJob(newjob);
		setDivision(newdiv);
		setSpouse(spouse);
	}
	
	//TODO parameter constructor
	
	public String getCompanyID() {
		return CompanyID;
	}
	
	public String getTitle() {
		return Title;
	}
	
	public Date getStartDate() {
		return StartDate;
	}
	public Division getDivision() {
		return division;
	}
	
	public Spouse getSpouse() {
		return spouse;
	}
	
	public Vector<Child> getChild() {
		return child;
	}
	
	public Vector<JobDescription> getJob(){
		return job;
	}
	
	public void setCompanyID(String companyID) {
		CompanyID = companyID;
	}
	
	public void setTitle(String title) {
		Title = title;
	}
	
	public void setStartDate(Date startDate) {
		StartDate = startDate;
	}
	
	public void addJob(JobDescription job) {
		this.job.addElement(job);
	}
	
	public void addChild(Child child) {
		this.child.addElement(child);
	}
	
	public void setDivision(Division division) {
		this.division = division;
	}
	
	public void setSpouse(Spouse spouse) {
		this.spouse = spouse;
	}
}
