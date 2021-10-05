package H208;

public class H208 {
	public static int swapDigitPairs(int n) {
		final int[] units = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
		int[] source = new int[11]; // "int" type data -2,147,483,648 <= n <= 2,147,483,647
		int index = 0;
		int rs = 0;
		
		// pass each digit to the array
		while (n > 0) { 						// Ex 123 => 321
			 source[index++] = n % 10;
			 n /= 10;
		}
		
		// check number of digits, if odd else process
		if (index % 2 != 0) {					// odd Ex: 321
			source[index] = source[index - 1]; 	// 3211
			source[index - 1] = 0;				// 3201
			index++;							// increase length of array
		}
		
		// algorithms
		for (int i = 0; i < index; i += 2)
		{
			rs += source[i + 1] * units[i];
			rs += source[i] * units[i + 1];
		}
		
		return rs;
	}
	
	public static void main(String[] args) {
		System.out.println(swapDigitPairs(1234567));
		System.out.println(swapDigitPairs(482596));
		System.out.println(swapDigitPairs(4220));
		System.out.println(swapDigitPairs(4002));
		System.out.println(swapDigitPairs(52017));
		System.out.println(swapDigitPairs(50217));
	}
}
