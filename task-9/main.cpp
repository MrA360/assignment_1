#include <iostream>
#include "main.h"

using namespace std;

void main()
{
    //Build a structure in main.h capable of representing a 2D vector called Vector2. Then,
    //write a function in main.h called GetDistanceBetweenPoints which:
    //
    //- Takes two Vector2 instances via parameter
    //- Returns the Euclidean distance between the two points, as a float.
    //
    //Euclidean distance calculation is used throughout games programming, for several
    //different purposes. 

    //You should then highlight the function working correctly. The code below
    //will prompt the user for an X and Y for two vectors.

    float xComponents[2] = { 0.0f, 0.0f };
    float yComponents[2] = { 0.0f, 0.0f };

    for (int i = 0; i < 2; i++)
    {
        cout << "Please enter the X component of vector " << (i + 1) << ": ";
        cin >> xComponents[i];

        cout << "Please enter the Y component of vector " << (i + 1) << ": ";
        cin >> yComponents[i];

        cout << std::endl;
    }

    Vector2 Vec1;
    Vector2 Vec2;

    Vec1.x = xComponents[0];
    Vec2.x = xComponents[1];
    Vec1.y = yComponents[0];
    Vec2.y = yComponents[1];
    

    cout << GetDistanceBetweenPoints(Vec1, Vec2);

    //You should then build two Vector2s from the given x and y components, and show
    //the calculated distance between each point.
    
}