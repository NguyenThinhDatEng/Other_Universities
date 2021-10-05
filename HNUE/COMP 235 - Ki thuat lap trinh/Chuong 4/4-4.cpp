#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fileInput("D:\\dayso.txt");

	if (fileInput.fail())
	{
		cout << "Failed to open this file!" << std::endl;
		return -1;
	}

	while (!fileInput.eof())
	{
		int n;
		fileInput >> n;
		if (n % 2 == 0)
            cout << n << " ";
	}
	cout << endl;

	fileInput.close();

	return 0;
}