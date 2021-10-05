import java.util.List;

import javax.xml.crypto.Data;

public class Main {
	public static void main(String[] args) throws Exception {
		Enter enter = new Enter();
		Display display = new Display();
		Person person = new Person();
		DataBase data = new DataBase();

		int choose = 0;
		do {
			display.menu();
			try {
				choose = Integer.parseInt(enter.choose());
			} catch (Exception e) {
				// TODO: handle exception
				System.err.println("Can not convert String to int");
			}
			switch (choose) {
			case 1: {
				display.personInfo();
				String path = enter.path("path");
				Double money = enter.money();

				List<Person> list = person.getPerson(path, money);
				display.showList(list);
				break;
			}
			case 2: {
				display.copyText();
				String source = enter.path("source");
				String newFileName = enter.path("new file name");
				if (data.copyWordOneTimes(source, newFileName))
					System.out.println("Copy done...");
				break;
			}
			case 3: {
				System.out.println("Exited!");
				break;
			}
			default:
				throw new IllegalArgumentException("Input is invalid");
			}
		} while (choose != 3);
	}
}
