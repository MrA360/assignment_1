#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cctype>//for toupper

using namespace std;

int main()
{

        string UserStr;
        int input_length = UserStr.length();
        int TextCheck = {};
        int index = 0;
        bool UPPER = false;

        getline(cin, UserStr);


        for (int i = 0; i >= input_length; i++)
        {
            if (UserStr != " " && index == 1)
            {

                UPPER = true;

            }

            if (UPPER = true && UserStr == " " && UserStr == ".")
            {

                UserStr[i] = toupper(UserStr[i]);

            }



        } return TextCheck;

}