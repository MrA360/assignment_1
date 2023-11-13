#include <iostream>
#include "main.h"

using namespace std;

void main()
{

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
    

    cout << "The distance between " << "(" << Vec1.x << "," << Vec1.y << ") " << "and" << " (" << Vec2.x << "," << Vec2.y << ") " << "is: " << GetDistanceBetweenPoints(Vec1, Vec2);
    
}