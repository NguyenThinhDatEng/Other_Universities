package P0001;

import java.util.Scanner;

public class BubbleSort {
	public static void main(String[] args) {
		// local variables
		int size = initSize();
		int[] arr = new int[size];
		
		bubbleSort(arr, size);
	}

	public static int initSize() {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Number Of Array: ");
		return sc.nextInt();
	}

	public static void bubbleSort(int[] arr, int size) {
		
		Scanner sc = new Scanner(System.in);

		// initialize array
		for (int i = 0; i < size; i++) {
			arr[i] = randomNumber();	// from 1 to 100
			// arr[i] = sc.nextInt();
		}
		
		System.out.print("Unsorted Array: ");
		for (int tmp2 : arr)
			System.out.print(tmp2 + " ");
		
		// algorithms
		int tmp;
		int runningDis = size - 1;
		for (int i = 0; i < runningDis; i++)
			for (int j = 0; j < runningDis - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		
		System.out.print("\nSorted Array: ");
		for (int tmp1 : arr) {
			System.out.print(tmp1 + " ");
		}
	}

	public static int randomNumber() {
		double randomDouble = Math.random();
		randomDouble = randomDouble * 100 + 1;
		return (int) randomDouble;
	}
}
