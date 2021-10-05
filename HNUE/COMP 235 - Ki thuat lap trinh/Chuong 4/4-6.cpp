#include<iostream>
#include<iomanip>
#include<math.h>
#include<fstream>
#include<string.h>
#include<algorithm>
using namespace std;

struct Product
{
    /* data */
    string pCode = "";
    string pName = "";
    int quantity = 0;
    double price = 0;

    void setData(string pCode, string pName, int quantity, double price)
    {
        this->pCode = pCode;
        this->pName = pName;
        this->quantity = quantity;
        this->price = price;
    } 

};

Product* loadData(int& n) {
    ifstream fileIn("D:\\c_Thu\\mathang.inp");
    
    if (fileIn.fail())
	{
		cout << "Failed to open this file!" << std::endl;
		return NULL;
	}

    string line;
    getline(fileIn, line);
    n = atoi(line.c_str());

    Product* products = new Product[n];

    int index = 0;
    string data[4];
    while (!fileIn.eof())
    {
        getline(fileIn, line);
        for (int i = 0; i < 4; i++)
        {
            data[i] = line.substr(0, line.find(' '));
            line.erase(0, data[i].length() + 1);
        }
        double price = atof(data[3].c_str());
        int quantity = atoi(data[2].c_str());
        products[index++].setData(data[0], data[1], quantity, price);
    }
    return products;
}

void sort(Product products[], int n)
{
    sort(products, products + n, [](Product p1, Product p2) {
        return p1.quantity > p2.quantity;
    });
}

void writeData(Product products[], int n)
{
    ofstream fileOut("D:\\c_Thu\\mathang.out");
    
    if (fileOut.fail())
	{
		cout << "Failed to open this file!" << std::endl;
		return;
	}

    for (int i = 0; i < n; i++)
    {
        fileOut << fixed << setprecision(2);
        fileOut << products[i].pCode << " " << products[i].quantity << " " << products[i].price << endl;
    }

    fileOut.close();
}

int main()
{
    int n;  // number of itemss
    Product* products = loadData(n);
    
    sort(products, n);

    writeData(products, n);

    return 0;
}