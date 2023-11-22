#include <iostream>

struct Assignment1
{
    int C1;
    int C2;
};

struct Assignment2
{
    int C1;
    int C2;
    int C3;

};

void main()
{
   
    struct Assignment1 Assign1;
    struct Assignment2 Assign2;


    bool ValidInput = false;

    
    std::cout << "____________ \n\n";
    std::cout << "Assessment 1\n";
    std::cout << "____________ \n\n";

    std::cout << "Please enter grade for C1 (Completion of portfolio) (70%): \n > ";
   

    while (ValidInput == false)
    {
        std::cin >> Assign1.C1;

        if (Assign1.C1 == 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 85 && Assign1.C1 <= 98)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 71 && Assign1.C1 <= 84)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 57 && Assign1.C1 <= 70)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 <= 55 && Assign1.C1 >= 1)
        {
            std::cout << ">> Boundary: Fail\n\n";
            ValidInput = true;
        }

        else
        {
            std::cout << "Invalid Input\n";
            std::cout << "Please input a number between 1-100 \n > ";

        }

    }


    std::cout << "Please enter grade for C2 (Reflective journal) (30%): \n > ";

    ValidInput = false;

    while (ValidInput == false)
    {
        std::cin >> Assign1.C2;

        if (Assign1.C2 == 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 85 && Assign1.C2 <= 98)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 71 && Assign1.C2 <= 84)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 57 && Assign1.C2 <= 70)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 <= 55 && Assign1.C2 >= 1)
        {
            std::cout << ">> Boundary: Fail\n\n";
            ValidInput = true;
        }

        else
        {
            std::cout << "Invalid Input\n";
            std::cout << "Please input a number between 1-100 \n > ";

        }

    }



    std::cout << "____________ \n\n";

    std::cout << "Assessment 2\n";
    std::cout << "____________ \n\n";

    std::cout << "Please enter grade for C1 (Development of text-based game) (60%): \n > ";

    ValidInput = false;

    while (ValidInput == false)
    {
        std::cin >> Assign2.C1;

        if (Assign2.C1 == 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 85 && Assign2.C1 <= 98)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 71 && Assign2.C1 <= 84)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 57 && Assign2.C1 <= 70)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 <= 55 && Assign2.C1 >= 1)
        {
            std::cout << ">> Boundary: Fail\n\n";
            ValidInput = true;
        }

        else
        {
            std::cout << "Invalid Input\n";
            std::cout << "Please input a number between 1-100 \n > ";

        }

    }

    std::cout << "Please enter grade for C2 (Code quality and practices) (20%): \n > ";

    ValidInput = false;

    while (ValidInput == false)
    {
        std::cin >> Assign2.C2;

        if (Assign2.C2 == 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 85 && Assign2.C2 <= 98)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 71 && Assign2.C2 <= 84)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 57 && Assign2.C2 <= 70)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 <= 55 && Assign2.C2 >= 1)
        {
            std::cout << ">> Boundary: Fail\n\n";
            ValidInput = true;
        }

        else
        {
            std::cout << "Invalid Input\n";
            std::cout << "Please input a number between 1-100 \n > ";

        }

    }

    std::cout << "Please enter grade for C3 (Demonstration of techniques) (20%): \n > ";

    ValidInput = false;

    while (ValidInput == false)
    {
        std::cin >> Assign2.C3;

        if (Assign2.C3 == 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 85 && Assign2.C3 <= 98)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 71 && Assign2.C3 <= 84)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 57 && Assign2.C3 <= 70)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 <= 55 && Assign2.C3 >= 1)
        {
            std::cout << ">> Boundary: Fail\n\n";
            ValidInput = true;
        }

        else
        {
            std::cout << "Invalid Input\n";
            std::cout << "Please input a number between 1-100 \n > ";

        }

        std::cout << "____________ \n\n";

        if (Assign1.C1 + Assign1.C2 == 200)
        {
            std::cout << "Total (relative) percent for assesment 1: 100%\n";
            std::cout << "weighted percent for assessment 1(0%-50%): 50%\n";
        }

        else if (Assign1.C1 + Assign1.C2)
        {

        }

        else if (true)
        {

        }

        else if (true)
        {

        }

        else
        {

        }
    }





    //Add code to build a grade calculator for the module. This should:
    //
    // - Prompt the user for input, for the grade of each component of assessment 1
    // - Prompt the user for input, for the grade of each component of assessment 2
    // - Provide a detailed breakdown of:
    //      - List the overall percentage of each assessment
    //      - Their overall grade after percentage weighting
    //      - Output which CRG band they fit into, for each criterion

    //Invalid input should be detected and handled after prompting. For example,
    //if the input grade "-1" is given, the user should be reprompted to enter the
    //grade again.

    //Furthermore, please use structs and arrays where appropriate to model
    //the different assessment components.
    //..
}