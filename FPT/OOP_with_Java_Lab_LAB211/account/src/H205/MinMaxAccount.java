package H205;

public class MinMaxAccount extends BankingAccount{
	private int balance;
	private int min;
	private int max;
	
	// constructs a MinMaxAccount object using information in the Startup object s
	public MinMaxAccount(Startup s) {
		super(s);
		balance = s.getBalance();
		min = max = balance;
	}
	
	@Override
	public void debit(Debit d)
	{
		//System.out.println("d = " + d.getAmount());
		balance -= d.getAmount();
		//System.out.println("b = " + balance);
		if (min > balance)
			min = balance;
		//System.out.println(min);
	}
	
	@Override
	public void credit(Credit c)
	{
		balance += c.getAmount();
		if (max < balance)
			max = balance;
	}
	
	// returns minimum balance in pennies
	public int getMin() {
		return min;
	}
	
	// returns maximum balance in pennies
	public int getMax() {
		return max;
	}
	
	public static void main(String[] args) {
		Startup s = new Startup(20);
		s.setAmount(100);
		System.out.println("current amount of startup: " + s.getAmount());
		System.out.println("current balance of startup: " + s.getBalance());
		
		MinMaxAccount acc = new MinMaxAccount(s);
		
		acc.debit(new Debit(s));
		s.setAmount(30);
		acc.debit(new Debit(s));
		s.setAmount(50);
		acc.credit(new Credit(s));
		s.setAmount(65);
		acc.credit(new Credit(s));
		s.setAmount(55);
		acc.credit(new Credit(s));
		
		System.out.println("minimum balance in pennies: " + acc.getMin());
		System.out.println("maximum balance in pennies: "+ acc.getMax());
	}
}
