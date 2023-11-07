#include <iostream>

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

    for(int i = 0; i < 2; i++)
    {
        cout << "Please enter the X component of vector " << (i + 1) << ": ";
        cin >> xComponents[i];

        cout << "Please enter the Y component of vector " << (i + 1) << ": ";
        cin >> yComponents[i];

        cout << std::endl;
    }

    int xdif = (xComponents[0] - xComponents[1]);
    int ydif = (yComponents[0] - yComponents[1]);

    int xSquare = pow(xdif, 2);
    int ySquare = pow(ydif, 2);

    int total = xSquare + ySquare;

    float d = sqrt(total);

    cout << d;

    //You should then build two Vector2s from the given x and y components, and show
    //the calculated distance between each point.
    
}