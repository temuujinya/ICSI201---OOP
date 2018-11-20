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
	
	
	public Employee(String name, String SSn, int age, String CompanyID, String Title, Date StartDate, Division Division, JobDescription job) {
		super(name, SSn, age);
		this.child = new Vector<Child>();
		this.job = new Vector<JobDescription>();
		setCompanyID(CompanyID);
		setTitle(Title);
		setStartDate(StartDate);
		setDivision(Division);
		this.addJob(job);
	}

	
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
	
	public void printAll() {
		System.out.println(
						   "--------Employee information-------" + "\n"
							   + "name: "+ this.getName() + "\n"
							   + "ssn: " + this.getSSnum() + "\n"
							   + "age: " + this.getAge() + "\n"
							   + "CompanyID: " + this.getCompanyID()+ "\n"
							   + "Title: " + this.getTitle() + "\n"
							   + "Start Date: " + this.getStartDate() + "\n"
							   + "division: " + this.getDivision().getDivisionName() + "\n");
		System.out.println("-------Job Description--------");
		for(int i=0; i<this.getJob().size();i++) {
			System.out.println("job-"+i+" :" + this.getJob().get(i).getDescription());
		}
		
		if(this.spouse != null) {
			System.out.println("-------Spouce information --------\n"
					   + "name: "+ this.getSpouse().getName() + "\n"
					   + "ssn: " + this.getSpouse().getSSnum() + "\n"
					   + "age: " + this.getSpouse().getAge() + "\n"
					   + "AnniversaryDate: " + this.getSpouse().getAnniversaryDate()+"\n");
		}
		
		if(child.size()>0) {
			System.out.println("-------Child information --------");
			for(int i=0; i<this.getChild().size();i++) {
				System.out.println("name: "+ this.getChild().get(i).getName()+"\n"
				   + "ssn: " + this.getChild().get(i).getSSnum() + "\n"
				   + "age: " + this.getChild().get(i).getAge() + "\n"
				   + "favorite toy: " + this.getChild().get(i).getFavoriteToy());
			}
					   
					   
		}
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
