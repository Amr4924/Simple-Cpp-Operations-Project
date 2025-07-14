#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

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

//[2] Function to check if each number in an array is even or odd
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

//[3] Function to calculate the average of 4 numbers
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

int main()
{
    cout << "=====================================\n";
    cout << "     Smart Calculator Installed!     \n";
    cout << "=====================================\n";
    cout << "\n";
    
    char choice; // Variable to store user's choice to repeat the program

    do
    {
        // Display the available operations menu
        vector<string> proces =
            {
                "[1] The first operation is basic arithmetic operations.",
                "[2] The second operation is the process of calculating the exponent.",
                "[3] The third operation is the process of checking if the numbers are even or odd.",
                "[4] The fourth operation is the process of calculating the average of four numbers.",
                "[5] The fifth  operation is the process of calculating the factorial of a number."};

        // Display menu options
        for (string &value : proces)
        {
            cout << value << endl;
        }

        int cto; // Variable to store the user's selected operation
        cout << "\nEnter Number (1) Or (2) Or (3) Or (4) Or (5): ";
        cin >> cto;

        // Basic arithmetic operations (1)
        if (cto == 1)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen the basic arithmetic operations." << endl;
            cout << "*******************************" << endl;
            
            // Vectors to store numbers and operations
            vector<double> nums;
            vector<double>::iterator calc;
            vector<char> printOp;
            vector<char>::iterator print;
            
            // Available operations array
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

            // Get the first number
            cout << "Enter The Number: \n";
            cin >> result;
            nums.push_back(result);

            /*cout << nums.at(0) << endl;*/

            // Main calculation loop
            while (true)
            {
                // Display available operations
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
                printOp.push_back(op);

                // Exit condition when user enters '='
                if (op == '=')
                {
                    break;
                }
                
                // Get next number
                cout << "Enter The Number: \n";
                cin >> numTwo;
                nums.push_back(numTwo);

                // Perform the selected operation
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
                    // Check for division by zero
                    if (numTwo == 0)
                    {
                        cout << "warning!! Cannot be divided by zero."<<endl;
                        continue;
                    }
                    result /= numTwo;
                }
                else
                {
                    cout << "Umm I missed something unfortunately the operation is incorrect!";
                }
            }
            
            // Display final result
            cout << "******************\n";
            cout << "result: " << result << endl;
            cout << "******************\n";
        }

        // Exponentiation operation (2)
        else if (cto == 2)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen the exponentiation operation." << endl;
            cout << "*******************************" << endl;

            cout << "Enter the number and power ." << endl;
            int num, power;
            cout << "Enter a number: ";
            cin >> num;

            cout << "Enter the number of times to square it: ";
            cin >> power;

            cout << "The square: " << exponent(num, power) << endl;
        }
        // Even/Odd check operation (3)
        else if (cto == 3)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen a comparison operation if the number is even or odd." << endl;
            cout << "*******************************" << endl;

            cout << "Enter (0) when you finish entering the numbers: " << endl;
            vector<int> nums;
            double number;

            // Loop to get numbers until user enters 0
            while (true)
            {
                cin >> number;
                if (number == 0) // Stop when user enters 0
                {
                    break;
                }
                nums.push_back(number); // Add number to vector
            }
            cout << "The even and odd numbers are: " << endl;
            even(nums); // Call function to check even/odd
        }

        // Average calculation operation (4)
        else if (cto == 4)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen the average operation." << endl;
            cout << "*******************************" << endl;

            cout << "Enter the numbers and when finished press (0) for the result. " << endl;

            vector<double> Numbers;
            double numberTwo;

            // Loop to get numbers until user enters 0
            while (true)
            {
                cin >> numberTwo;
                if (numberTwo == 0) // Stop when user enters 0
                {
                    break; // Exit the loop if the user enters 0
                }

                Numbers.push_back(numberTwo); // Add number to vector
            }

            cout << "The average of the numbers is: " << avg(Numbers) << endl;
        }
        // Factorial calculation operation (5)
        else if (cto == 5)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen the factorial operation." << endl;
            cout << "*******************************" << endl;
            
            long long int fct;
            cout << "\nEnter a number to calculate its factorial: ";
            cin >> fct;
            cout << factorial(fct) << endl; // Call factorial function and display result
        }
        // Invalid input handling
        else
        {
            cout << "Invalid input, please enter 1, 2, 3, 4, or 5." << endl;
        }

        // Ask user if they want to repeat the program
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat if user enters 'y' or 'Y'

    // Exit message
    cout << "\n=====================================\n";
    cout << "     Smart Calculator Exited!       \n";
    cout << "Thank you for using the program!" << endl;
    cout << "=====================================\n";

    return 0;
}