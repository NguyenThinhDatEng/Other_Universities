package H207;

import java.util.Scanner;

public class H207 {
	public static int secondHalfLetters(String s) {
		int length = s.length();
		int count = 0;
		char c;
		s = s.toUpperCase();
		
		for (int i = 0; i < length; i++)
		{
			c = s.charAt(i);
			if (c <= 'Z' && c >= 'N')
				count++;
		}
		return count;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String source;
		int maxInputs = 10;
		
		while (true)
		{
			source = sc.nextLine();
			System.out.println(secondHalfLetters(source));
			if (--maxInputs < 1) break;
		}
	}
}
