package lab9;

public class Child extends Person{

	protected String FavoriteToy;
	
	public Child() {
		super("default name", "ssn",0);
		setFavoriteToy("default");
	}
	
	public Child(String Name, String SSnum, int Age, String FavoriteToy) {
		super(Name, SSnum, Age);
		setFavoriteToy(FavoriteToy);
	}
	
	public String getFavoriteToy() {
		return FavoriteToy;
	}
	
	public void setFavoriteToy(String favoriteToy) {
		FavoriteToy = favoriteToy;
	}
}
