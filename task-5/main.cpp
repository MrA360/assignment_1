#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cctype>//for toupper

using namespace std;

int main()
{


    cout << "Please input a sentence i will uppercase it lower case it and sentece case it: ";


        string UserStr;
        bool UPPER = true;

        getline(cin, UserStr);
        int input_length = UserStr.length();

        cout << endl;



        for (size_t i = 0; i < input_length; i++)
        {

            UserStr[i] = toupper(UserStr[i]);

        }

        cout << UserStr << endl;

        for (size_t i = 0; i < input_length; i++)
        {

            UserStr[i] = tolower(UserStr[i]);

        }

        cout << UserStr << endl;


        for (int i = 0; i <= input_length; i++)
        {

            if (UPPER == true && UserStr[i] != ' ')
            {

                UserStr[i] = toupper(UserStr[i]);
                UPPER = false;

            }

            if (ispunct(UserStr[i])) // I found ispunct online and tought its better than writing out all three sentece casses (.?!).
            {
                UPPER = true;
            }



        }
        cout << UserStr << endl;

}