#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	ifstream infile;
	ofstream outfile;
	vector<string>list;
	string number;
	string filename;
	int spaces;
	int count = 1;

	cout << "Enter the number of spaces: ";
	cin >> spaces;
	infile.open("C:/Users/jchyj/OneDrive/Desktop/InputExcel.txt");

	if (infile.fail())
	{
		cerr << "Unable to open the file";
		exit(1);
	}
	while (!infile.eof())
	{
		std::getline(infile, number);
		list.push_back(number);
		for (int i = 0; i < spaces; i++)
		{
			// list.push_back(" ");
			list.push_back(number);
		}
	}
	infile.close();
	string outputfile = "C:/Users/jchyj/OneDrive/Desktop/output.txt";
	outfile.open(outputfile);
	for (int j = 0; j < list.size() - 1; j++) {
		cout << list[j] << endl;
		outfile << list[j]  << endl;
	}
	outfile.close();
	return 0;
}