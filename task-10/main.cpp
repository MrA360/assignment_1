#include <iostream>

struct Assignment1
{
    float C1;
    float C2;
    float Tottal1;
    float WeightPrec1;
};

struct Assignment2
{
    float C1;
    float C2;
    float C3;
    float Tottal2;
    float WeightPrec2;
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

        if (Assign1.C1 >= 70 && Assign1.C1 <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 60 && Assign1.C1 <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 50 && Assign1.C1 <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 >= 40 && Assign1.C1 <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C1 <= 39 && Assign1.C1 >= 1)
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

        if (Assign1.C2 >= 70 && Assign1.C2 <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 60 && Assign1.C2 <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 50 && Assign1.C2 <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 >= 40 && Assign1.C2 <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign1.C2 <= 39 && Assign1.C2 >= 1)
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

        if (Assign2.C1 >= 70 && Assign2.C1 <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 60 && Assign2.C1 <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 50 && Assign2.C1 <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 >= 40 && Assign2.C1 <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C1 <= 39 && Assign2.C1 >= 1)
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

        if (Assign2.C2 >= 70 && Assign2.C2 <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 60 && Assign2.C2 <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 50 && Assign2.C2 <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 >= 40 && Assign2.C2 <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C2 <= 39 && Assign2.C2 >= 1)
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

        if (Assign2.C3 >= 70 && Assign2.C3 <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 60 && Assign2.C3 <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 50 && Assign2.C3 <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 >= 40 && Assign2.C3 <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (Assign2.C3 <= 39 && Assign2.C3 >= 1)
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

    ValidInput = false;


    std::cout << "____________ \n\n";
    float tottalUndiv1 = Assign1.C1 + Assign1.C2;
    float tottalUndiv2 = Assign2.C1 + Assign2.C2 + Assign2.C3;
    float TottalAfterW = Assign1.WeightPrec1 + Assign2.WeightPrec2;

    Assign1.Tottal1 = tottalUndiv1 / 2;
    Assign2.Tottal2 = tottalUndiv2 / 3;

    Assign1.WeightPrec1 = Assign1.Tottal1 / 2;
    Assign2.WeightPrec2 = Assign2.Tottal2 / 2;



    std::cout << "Total (relative) percent for assesment 1: " << Assign1.Tottal1 << "\n";
    std::cout << "weighted percent for assessment 1(0%-50%): " << Assign1.WeightPrec1 << "\n";

    std::cout << "Total (relative) percent for assesment 2: " << Assign2.Tottal2 << "\n";
    std::cout << "weighted percent for assessment 1(0%-50%): " << Assign2.WeightPrec2 << "\n";

    while (ValidInput == false)
    {

        if (TottalAfterW >= 70 && TottalAfterW <= 100)
        {
            std::cout << ">> Boundary: 1:1 (First)\n\n";
            ValidInput = true;
        }

        else if (TottalAfterW >= 60 && TottalAfterW <= 69)
        {
            std::cout << ">> Boundary: 2:1 (Upper Second-Class)\n\n";
            ValidInput = true;
        }

        else if (TottalAfterW >= 50 && TottalAfterW <= 59)
        {
            std::cout << ">> Boundary:  2:2 (Lower Second-Class)\n\n";
            ValidInput = true;
        }

        else if (TottalAfterW >= 40 && TottalAfterW <= 49)
        {
            std::cout << ">> Boundary: Pass(third)\n\n";
            ValidInput = true;
        }

        else if (TottalAfterW <= 39 && TottalAfterW >= 1)
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