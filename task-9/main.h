#pragma once
#include <iostream>



struct Vector2
{
    float x;
    float y;
};


float GetDistanceBetweenPoints(Vector2 a, Vector2 b)
{
    float xdif = (a.x - b.x);
    float ydif = (a.y - b.y);

    float xSquare = pow(xdif, 2);
    float ySquare = pow(ydif, 2);

    float total = xSquare + ySquare;

    return sqrt(total);
        
}


//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance