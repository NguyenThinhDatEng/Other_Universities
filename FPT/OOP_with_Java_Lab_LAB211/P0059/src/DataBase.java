
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;

import java.io.IOException;

import java.util.ArrayList;
import java.util.List;

public class DataBase {
	private static File file = new File("");
	private List<Person> personList = new ArrayList<Person>();
	private static FileReader fr = null;

	public List<Person> getPersonList() {
		return personList;
	}

	public void setDataBase(String path) throws IOException {
		file = new File(path);
		String line;

		if (isValidPath(path, file)) {
			try {
				fr = new FileReader(file);
				BufferedReader br = new BufferedReader(fr);

				while ((line = br.readLine()) != null) {
					personList.add(dataMining(line));
				}
				fr.close();
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} finally {
				if (fr == null)
					throw new FileNotFoundException("Can't read file");
			}
		} else
			throw new IOException("Path doesn't exist");
	}

	public static boolean isValidPath(String path, File file) {
		if (path == null || !file.exists())
			return false;
		else
			return file.isFile();
	}

	public Person dataMining(String line) {
		String[] source = line.split("; ");
		double salary = 0;
		try {
			salary = Double.parseDouble(source[2]);
		} catch (Exception e) {
			// TODO: handle exception
			System.err.println("Can not convert String to Double");
		}
		return new Person(source[0], source[1], salary);
	}

	public static boolean copyWordOneTimes(String source, String destination) throws Exception {
		List<List<String>> list = setList(26);
		file = new File(source);
		String line;

		if (isValidPath(source, file)) {
			try {
				fr = new FileReader(file);
				BufferedReader br = new BufferedReader(fr);

				String content = "";
				while ((line = br.readLine()) != null) {
					content += line + " ";
				}
				// remove leading and trailing spaces of String
				content = content.trim();
				content = content.toLowerCase();
				content += " "; // to match algorithms
				
				System.out.println(content);

				char c;
				String word = "";
				int length = content.length();
				int index = 0;
				System.out.println(length);
				for (int i = 0; i < length; i++) {
					c = content.charAt(i);
					System.out.println(c);
					if (Character.isAlphabetic(c)) {
						word += c;
						System.out.println(word);
					} else {
						if (word != "")
						{
							System.out.println(word.codePointAt(0));
							try {
								index = word.codePointAt(0) - 94; 
								list.get(index).add(word);
								System.out.println(word.codePointAt(0));
								word = "";
							} catch (Exception e) {
								// TODO: handle exception
								System.err.println("");
							}
							
						}
					}
				}
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} finally {
				if (fr == null)
					throw new FileNotFoundException("Can't read file");
				fr.close();
			}
		} else
			throw new IOException("Path doesn't exist");
		return true;
	}
	
	public static List<List<String>> setList(int length) {
		List<List<String>> list = new ArrayList<List<String>>();
		while (length > 0)
		{
			list.add(new ArrayList<String>());
			length--;
		}
		return list;
	}
}
