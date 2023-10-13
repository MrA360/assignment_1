#include <iostream>  // cout
#include <string>
#include <vector>

using namespace std;

int main() 
{
	string input_MSG;
	int inputChange = 0;


	cin >> input_MSG;

	cout << "****";

	while (input_MSG.length() > inputChange)
	{

		cout << "*";

		inputChange++;

	}

	inputChange = 0;

	cout << "\n* " << input_MSG << " *\n";
	cout << "****";
	


	while (input_MSG.length() > inputChange)
	{

		cout << "*";

		inputChange++;

	}

}