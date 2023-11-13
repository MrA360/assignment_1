#include "main.h"

using namespace std;

void main()
{  

    int random_Num = random(1, 100);
    int player_gues;

    
    bool finish_loop = false;

    while (finish_loop != true)
    {
        cout << random_Num << endl;
        cout << "Please inputa number: ";
        cin >> player_gues;

        if (cin.fail()) //this is used to chek if the person enterd a character instead of an int
        {
            cout << "ERROR -- You did not enter an integer";

            // get rid of failure state
            cin.clear();

            // discard 'bad' character(s) 
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }

        if (player_gues == random_Num)
        {

            cout << "yey good job";
            finish_loop = true;

        }

        else if (player_gues > random_Num + 50 || player_gues < random_Num - 50)
        {
            cout << "freezing\n \n";

        }

        else if (player_gues > random_Num + 35 || player_gues < random_Num - 35)
        {
            cout << "colder\n \n";


        }

        else if (player_gues > random_Num + 25 || player_gues < random_Num - 25)
        {
            cout << "cold\n \n";


        }

        else if (player_gues > random_Num + 15 || player_gues < random_Num - 15)
        {
            cout << "warm\n \n";


        }

        else if (player_gues > random_Num + 10 || player_gues < random_Num - 10)
        {
            cout << "warmer\n \n";

        }

        else if (player_gues > random_Num + 5 || player_gues < random_Num - 5)
        {
            cout << "hot\n \n";


        }

        else if (player_gues >= random_Num + 2 || player_gues < random_Num - 2)
        {
            cout << "boiling\n \n";


        }

        else
        {
            cout << "the number is between 1, 100\n \n";
        }
    }

}
