package H205;

public class BankingAccount {
	private int balance;

	// constructs a BankingAccount object using information in the Startup object s
	public BankingAccount(Startup s)
	{
		balance = s.getBalance();
	}
	
	// records the given debit
	public void debit(Debit d)
	{
		balance -= d.getAmount();
	}
	
	// records the given credit
	public void credit(Credit c)
	{
		balance += c.getAmount();
	}
	
	// returns current balance in pennies
	public int getBalance() {
		return balance;
	}
}
