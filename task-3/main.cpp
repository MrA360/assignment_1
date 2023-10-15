#include <iostream>

using namespace std;

void main()
{

	float input_number;

	cout << "Please enter the number you want to square: ";
	cin >> input_number;

	float output_number = input_number * input_number;

	cout << input_number << " Squared is: " << output_number;

}