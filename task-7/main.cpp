#include <iostream>

using namespace std;

void main()
{

    struct
    {
        string Chosen_Class;
        int sellection;
        string name;


    } profile;


    do
    {
        cout << "please choose a class bellow: \n 1. Mage \n 2. Archer \n 3. Warrior \n 4.Monk \n \n >";
        cin >> profile.sellection;

        if (profile.sellection == 1)
        {
            profile.Chosen_Class = "Mage";
        }

        else if (profile.sellection == 2)
        {
            profile.Chosen_Class = "Archer";
        }

        else if (profile.sellection == 3)
        {
            profile.Chosen_Class = "Warrior";
        }

        else if (profile.sellection == 4)
        {
            profile.Chosen_Class = "Monk";
        }

        else
        {
            cout << "sorry the number has to be between 1 and 4 \n\n";
        }

    } while (profile.sellection <= 0 || profile.sellection >= 5);


    cout << "please enter your name here: ";

    cin >> profile.name;

    cout << "Player details: \n" << " - Name: " << profile.name << "\n - Class: " << profile.Chosen_Class;




//Using structs and arrays, build a character class and name selection system
 //for a text-based game. The program should firstly prompt the user for a class
 //using a numbered menu system. For example:

 // Please choose a character class below:
 // 1. Spearman
 // 2. Knight
 // 3. Archer
 //
 // > 3
 // - You have selected the Archer character class.

 //The character class names and amount are up to you, but should make 
 //use of an array so the solution can be easily extended. Invalid menu choices
 //should also be handled.

 //The user should then be prompted for their in-game name, and then their
 //player details should be shown. These details should be stored in a struct,
 //so player details can be a) easily extended to encompass more player detail
 //types in the future and b) logically exist in one structure.

 //The prompt should be shown like below:

 // Please enter your name: ben
 //
 // Player details:
 // - Name: ben
 // - Class: Knight


}