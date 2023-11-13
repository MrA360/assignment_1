#include <iostream>

using namespace std;

struct
{
    int sellection;
    string ss[4] = { "Mage", "Archer", "Warrior","Monk" };
    string name;
    string ch;
}static profile;




void main()
{
    cout << "Please choose a class bellow: ";
    int count;
    for (count = 0; count < 4; count++)
        cout << endl << count + 1 << ":" << profile.ss[count];

    cout << endl;

    do
    {
        cin >> profile.sellection;

        if (profile.sellection < 4 && profile.sellection > 0)
        {
            profile.ch = profile.ss[profile.sellection - 1];

            cout << "You have selected the " << profile.ch << " character class." << "\n\n";
        }

        else
        {
            cout << "Sorry the number has to be between 1 and 4 \n\n";
        }

    } while (profile.sellection <= 0 || profile.sellection >= 5);




    cout << "Please enter your name here: ";

    cin >> profile.name;

    cout << " \nPlayer details: \n" << " - Name:  " << profile.name << "\n - Class: " << profile.ch;

}
