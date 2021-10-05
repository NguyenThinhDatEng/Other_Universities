package H205;

public class Startup {
	private int amount;
	private int balance;
	
	public Startup() {
		
	}
	
	public Startup(int balance) {
		this.balance = balance;
	}
	
	public void setAmount(int amount) {
		this.amount = amount;
	}
	
	public int getAmount() {
		return amount;
	}
	
	public int getBalance() {
		return balance;
	}
}
