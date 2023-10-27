#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cctype>//for toupper

using namespace std;

int main()
{

        string str;
        string input;
        int i = 0;
        

        cin >> str;

        i = str.find(".");


        while (str.length() > i)
        {
           i++;

           if (ispunct(i) && isspace(i) || ispunct(i))

           {

               transform(str.begin(), str.end(), str.begin(), toupper);

           }
           
        }

        cout << str;

}