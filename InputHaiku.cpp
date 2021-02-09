#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputStream;
	string haiku;


	inputStream.open("haiku.txt");

	// check for opening.
	if (inputStream)
	{
		while (getline(inputStream, haiku))
		{
			cout << haiku << endl;;
		}
		inputStream.close();
	}
	else
	{
		cout << "Error opening the file" << endl;
		return 0;
	}

	return 0;
}