#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outputStream;
	string answer;

	cout << "===============================" << endl;
	cout << "Some people is going" << endl;
	cout << "although they don't have shoes" << endl;
	cout << "It doesn't matter to them" << endl;
	cout << "===============================" << endl;
	cout << "It will be saved on file \"haiku.txt\"" << endl;
	cout << "If you want to save. Type \"Yes\" or \"No\" please : ";
	cin >> answer;

	while (answer != "Yes" && answer != "No")
	{
		cout << "Type \"Yes\" or \"No\" please : ";
		cin >> answer;
	}

	// If you want to save
	if (answer == "Yes")
	{
		outputStream.open("haiku.txt");
		if (outputStream)
		{
			outputStream << "Some people is going" << endl;
			outputStream << "although they don't have shoes" << endl;
			outputStream << "It doesn't matter to them";
			outputStream.close();
		}
		else
		{
			cout << "Error opening the file" << endl;
			return 0;
		}
	}


	return 0;
}