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
	string filename;
	int columns;

	cout << "Enter the number of columns: ";
	cin >> columns;
	infile.open("C:/Users/jchyj/OneDrive/Desktop/ColumnExcel.txt");

	vector<vector<string>> cols(columns, vector<string>());

	if (infile.fail())
	{
		cerr << "Unable to open the file";
		exit(1);
	}
	while (!infile.eof())
	{
		for (int i = 0; i < columns; i++)
		{
			string value;
			infile >> value;
			cols[i].push_back(value);
		}
	}
	for (int i = 0; i < columns; i++)
		cols[i].pop_back();

	infile.close();
	string outputfile = "C:/Users/jchyj/OneDrive/Desktop/columnoutput.txt";
	outfile.open(outputfile);
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < cols[i].size(); j++)
		{
			cout << cols[i][j] << endl;
			outfile << cols[i][j] << endl;
		}
	}
	outfile.close();
	return 0;
}