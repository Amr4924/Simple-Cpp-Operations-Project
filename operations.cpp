#include "operations.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;


// Function to display menu options
void options(vector<string> option)
{
    for (string& value : option)
    {
        cout << value << endl;
    }
}

// Function to perform basic arithmetic operations with operation history
double BasicOperations(vector<double> nums, vector<char> printOp)
{
    // Available arithmetic operations
    string opCh[] =
    {
        "+",
        "-",
        "*",
        "/",
    };
    int sizeOpArray = size(opCh);

    double numTwo, result = 0;
    char op;

    // Get the first number from user
    cout << "Enter The Number: \n";
    cin >> result;
    nums.push_back(result);

    // Main calculation loop
    while (true)
    {
        // Display available operations to user
        cout << "Choose the operation: ";
        cout << "( ";
        for (int i = 0; i < sizeOpArray; i++)
        {
            cout << opCh[i];
            if (i != sizeOpArray - 1)
            {
                cout << " | ";
            }
        }
        cout << " )" << endl;
        cout << "Select ( = ) for results:-" << endl;

        cin >> op;
        printOp.push_back(op); // Store operation for future use

        // Exit condition when user enters '='
        if (op == '=')
        {
            break;
        }

        // Get next number from user
        cout << "Enter The Number: \n";
        cin >> numTwo;
        nums.push_back(numTwo); // Store number for future use

        // Perform the selected arithmetic operation
        if (op == '+')
        {
            result += numTwo;
        }
        else if (op == '-')
        {
            result -= numTwo;
        }
        else if (op == '*')
        {
            result *= numTwo;
        }
        else if (op == '/')
        {
            // Division by zero protection
            if (numTwo == 0)
            {
                cout << "warning!! Cannot be divided by zero." << endl;
                continue;
            }
            result /= numTwo;
        }
        else
        {
            cout << "Umm I missed something unfortunately the operation is incorrect!\n";
            continue;
        }
    }
    cout << "******************\n";
    return result;
}
//[1] Function to calculate the power of a number using loops
int exponent(int numOne, int os)
{
    int result = 1;
    for (int i = 0; i < os; i++)
    {
        result *= numOne;
    }
    return result;
}

//[2] Function to check if each number in a vector is even or odd
void even(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            cout << "The Number [ " << nums[i] << " ] is even" << endl;
        }
        else
        {
            cout << "The Number [ " << nums[i] << " ] is odd" << endl;
        }
    }
    return;
}

//[3] Function to calculate the average of numbers in a vector
double avg(vector<double> nums)
{
    double sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums.at(i);
    }

    double average = sum / nums.size();
    return average;
}

//[4] Function to calculate factorial of a number
int factorial(long long int fct)
{
    int factorial = 1; // Variable to store the final result
    // Loop to multiply numbers from 1 to fct
    for (int i = 1; i <= fct; i++)
    {
        factorial *= i; // Multiply the current result by i
    }
    cout << "factorial " << fct << " = "; // Print a descriptive message
    return factorial;                     // Return the final result
}

//[5] Function to calculate triangle area using base and height
double AreaOfTriangle(double Base, double Height)
{
    double result = 0.5 * Base * Height;
    return result;
}

//[6] Function to calculate triangle area using Heron's formula
double Heron(double HeightOne, double HeightTwo, double HeightThree)
{
    double HalfTheOcean = (HeightOne + HeightTwo + HeightThree)/2;
    double result = HalfTheOcean * (HalfTheOcean - HeightOne) * (HalfTheOcean - HeightTwo) * (HalfTheOcean - HeightThree);
    
    // Check for invalid triangle sides
    if (result < 0) {
        cout << "Invalid triangle sides. Cannot calculate area using Heron's formula." << endl;
        return -1;
    }

    return sqrt(result);
}

//[7] Function to calculate triangle perimeter
double PerimeterOfTriangle(double HeightOne, double HeightTwo, double HeightThree)
{
    double result = HeightOne + HeightTwo + HeightThree;
    return result;
}

//[8] Function to convert between different length units
string LengthConversion(double value, int option)
{
        double result;
        if (option == 1)
        {
            cout << "Convert from (cm) to (m)." << endl;
            result = value / 100;
            return to_string(value) + " cm = " + to_string(result) + " m";
        }
        else if (option == 2)
        {
            cout << "Convert from (m) to (cm)." << endl;
            result = value * 100;
            return to_string(value) + " m = " + to_string(result) + " cm";
        }
        else if (option == 3)
        {
            cout << "Convert from (m) to (km)." << endl;
            result = value / 1000;
            return to_string(value) + " m = " + to_string(result) + " km";
        }
        else if (option == 4)
        {
            cout << "Convert from (km) to (m)." << endl;
            result = value * 1000;

            return to_string(value) + " km = " + to_string(result) + " m";
        }
        else
        {
            cout << "\n<><><><><><><><><><><><><><><><><><><><>" << endl;
            cout << "Please select again from the available options." << endl;
            cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
            
            return "Invalid option.";
        }
}


//[9] Function to convert between different area units
string ConvertSpaces(double value,int option)
{
    double result;
    if (option == 1)
    {
        cout << "Convert from (cm²) to (m²)." << endl;
        result = value / 10000;
        return to_string(value) + " cm² = " + to_string(result) + " m²";
    }
    else if (option == 2)
    {
        cout << "Convert from (m²) to (cm²)." << endl;
        result = value * 10000;
        return to_string(value) + " m² = " + to_string(result) + " cm²";
    }
    else if (option == 3)
    {
        cout << "Convert from (m²) to (km²)." << endl;
        result = value / 1000000;
        return to_string(value) + " m² = " + to_string(result) + " km²";
    }
    else if (option == 4)
    {
        cout << "Convert from (km²) to (m²)." << endl;
        result = value * 1000000;

        return to_string(value) + " km² = " + to_string(result) + " m²";
    }
    else if (option == 5)
    {
        cout << "Convert from (cm²) to (km²)." << endl;
        result = value / 100000000;

        return to_string(value) + " cm² = " + to_string(result) + " km²";
    }
    else if (option == 6)
    {
        cout << "Convert from (km²) to (cm²)." << endl;
        result = value * 100000000;

        return to_string(value) + " km² = " + to_string(result) + " cm²";
    }
    else
    {
        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><>" << endl;
        cout << "Please select again from the available options." << endl;
        cout << "<><><><><><><><><><><><><><><><><><><><><><><>" << endl;
        return "Invalid option.";
    }
}