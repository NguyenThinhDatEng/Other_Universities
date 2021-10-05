package H211;

public class Main {
	public static void main(String[] args) {
		ArrayIntList list = new ArrayIntList();
		System.out.print("size = ");
		list.setSize();
		list.setElementData();
		list.showList();
		
		ArrayIntList list1 = list.fromCounts();
		list1.showList();
	} 
}
