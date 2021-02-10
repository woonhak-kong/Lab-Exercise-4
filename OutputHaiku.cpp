#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outputStream;
	string answer;

	cout << "===============================" << endl;
	cout << "Kill it kill them all!" << endl;
	cout << "Oh, where is item?" << endl;
	cout << "No way not yet?" << endl;
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
			outputStream << "kill it kill them all!" << endl;
			outputStream << "Oh, where is item?" << endl;
			outputStream << "No way not yet?";
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