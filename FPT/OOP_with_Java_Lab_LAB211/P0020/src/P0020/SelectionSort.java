package P0020;

import java.util.Scanner;

public class SelectionSort {
	public static void main(String[] args) {
		// local variables
		int size = initSize();
		int[] arr = new int[size];

		selectionSort(arr, size);
	}

	public static int initSize() {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Number Of Array: ");
		return sc.nextInt();
	}

	public static void selectionSort(int[] arr, int size) {

		Scanner sc = new Scanner(System.in);

		// initialize array
		for (int i = 0; i < size; i++) {
			arr[i] = randomNumber(); // from 1 to 100
			// arr[i] = sc.nextInt();
		}

		System.out.print("Unsorted Array: ");
		for (int tmp2 : arr)
			System.out.print(tmp2 + " ");

		// algorithms
		int indexOfMin;
		int tmp;
		for (int i = 0; i < size; i++) {
			indexOfMin = i;

			for (int j = i + 1; j < size; j++)
				if (arr[indexOfMin] > arr[j])
					indexOfMin = j;

			if (indexOfMin != i) {
				tmp = arr[i];
				arr[i] = arr[indexOfMin];
				arr[indexOfMin] = tmp;
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
