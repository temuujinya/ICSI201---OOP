package lab9;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Spouse extends Person{
	protected Date AnniversaryDate;
	
	
	public Spouse(String name, String SSn, int age, String AnniversaryDate) {
		super(name, SSn, age);
		setAnniversaryDate(AnniversaryDate);
	}
	
	public Date getAnniversaryDate() {
		return AnniversaryDate;
	}
	
	public void setAnniversaryDate(String anniversaryDate) {
		SimpleDateFormat ft = new SimpleDateFormat("yyyy-MM-dd");
		Date sDate = null;
		
		try {
			sDate = ft.parse(anniversaryDate);
		}catch(ParseException e){
			System.out.println("Ognoo parse hiihed aldaa garlaa" + ft);
		}
		
		AnniversaryDate = sDate;
	}
}
