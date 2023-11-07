#pragma once
#include <iostream>



struct Vector2
{
    float x;
    float y;
};

float x[2];
float y[2];


void GetDistanceBetweenPoints() 
{
    int xdif = (x[0] - x[1]);
    int ydif = (y[0] - y[1]);

    int xSquare = pow(xdif, 2);
    int ySquare = pow(ydif, 2);

    int total = xSquare + ySquare;

    float d = sqrt(total);
   
}


//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance