#include <iostream>

using namespace std;

void main()
{

    string name;
    string clan_tag;
    string surname;
    int age;

    cout << "please enter your name: ";
    cin >> name;
    cout << "please enter your clan tag: ";
    cin >> clan_tag;
    cout << "please enter your surname: ";
    cin >> surname;
    cout << "please enter your age: ";
    cin >> age;

    cout << "\nPlayer details: ";
    cout << "\nName: " << name;
    cout << "\nUsername:" << "[" << clan_tag << "]" << surname;
    cout << "\nAge: " << age;

}