package lab9;

import java.util.Date;

public class Spouse extends Person{
	protected Date AnniversaryDate;
	
	public Spouse() {
		Date date = new Date(System.currentTimeMillis());
		setAnniversaryDate(date);
	}
	
	public Spouse(Date AnniversaryDate) {
		setAnniversaryDate(AnniversaryDate);
	}
	
	public Date getAnniversaryDate() {
		return AnniversaryDate;
	}
	
	public void setAnniversaryDate(Date anniversaryDate) {
		AnniversaryDate = anniversaryDate;
	}
}
