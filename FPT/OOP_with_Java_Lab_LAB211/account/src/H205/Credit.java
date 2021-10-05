package H205;

public class Credit{
	private Startup s;
		
	public Credit(Startup s) {
		// TODO Auto-generated constructor stub
		this.s = s;
	}
	
	public int getAmount() {
		return s.getAmount();
	}

}
