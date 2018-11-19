package lab9;

public class Child extends Person{

	protected String FavoriteToy;
	
	public Child() {
		setFavoriteToy("default");
	}
	
	public Child(String FavoriteToy) {
		setFavoriteToy(FavoriteToy);
	}
	
	public String getFavoriteToy() {
		return FavoriteToy;
	}
	
	public void setFavoriteToy(String favoriteToy) {
		FavoriteToy = favoriteToy;
	}
}
