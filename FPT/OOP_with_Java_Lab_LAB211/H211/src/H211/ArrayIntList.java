package H211;

import java.util.Scanner;

public class ArrayIntList {
	// attributes
	private int[] elementData;
	private int size; // the length of elementData
	Scanner sc = new Scanner(System.in);

	// Constructor
	public ArrayIntList() {
		// TODO Auto-generated constructor stub
	}

	// setter, getter
	public void setSize() {
		size = sc.nextInt();
	}

	public void setSize(int size) {
		this.size = size;
	}

	public void setElementData() {
		elementData = new int[size];

		for (int i = 0; i < size; i++) {
			elementData[i] = sc.nextInt();
		}
	}

	public void setElementData(int[] elementData) {
		this.elementData = elementData;
	}

	public int getSize() {
		return size;
	}

	// display list on screen
	public void showList() {
		System.out.println("---------------------------------");
		for (int tmp : elementData) {
			System.out.print(tmp + " ");
		}
		System.out.println();
	}

	public ArrayIntList fromCounts() {
		ArrayIntList list = new ArrayIntList();
		int[] elementResult;
		
		// set size for new list
		int tmpSize = 0;
		for (int i = 0; i < getSize(); i += 2)
			tmpSize += elementData[i];

		list.setSize(tmpSize);

		elementResult = new int[list.getSize()];

		// Algorithms
		int indexOfER = 0; // index of ElementResult
		int numberOfRepetitions;
		for (int i = 0; i < getSize(); i += 2) {
			numberOfRepetitions = elementData[i];
			while (numberOfRepetitions > 0)
			{
				try {
					elementResult[indexOfER++] = elementData[i + 1];
					
				} catch (Exception e) {
					// TODO: handle exception
					System.err.println("out of bounds");
				}
				numberOfRepetitions--;
			}
		}

		list.setElementData(elementResult);
		return list;
	}
}
