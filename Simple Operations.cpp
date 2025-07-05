#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the power of a number using loops
int square(int numOne, int os)
{
    int result = 1;
    for (int i = 0; i < os; i++)
    {
        result *= numOne;
    }
    return result;
}

// Function to check if each number in an array is even or odd
void even(int nums[4], int count)
{
    for (int i = 0; i < count; i++)
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

// Function to calculate the average of 4 numbers
double avg(double nums[4], int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += nums[i];
    }

    double average = sum / count;
    return average;
}
int factorial(int fct)
{
    int factorial = 1; // Variable to store the final result
    // Loop to multiply numbers from 1 to fct
    for (int i = 1; i <= fct; i++)
    {
        factorial *= i; // Multiply the current result by i
    }
    cout << "factorial " << fct << " = "; // Print a descriptive message
    return factorial; // Return the final result
}

int main()
{
    cout << "=====================================\n";
    cout << "     Smart Calculator Installed!     \n";
    cout << "=====================================\n";
    cout<< "\n";
    char choice; // Variable to store user's choice to repeat the program

    do
    {
        // Display the available operations
        string proces[4] =
            {
                "[1] The first operation is the process of calculating the exponent.",
                "[2] The second operation is the process of checking if the numbers are even or odd.",
                "[3] The third operation is the process of calculating the average of four numbers.",
                "[4] The fourth operation is the process of calculating the factorial of a number." };
                int sizePree= size(proces);

        for (int i = 0; i < sizePree; i++)
        {
            cout << proces[i] << endl;
        }

        int cto; // Variable to store the user's selected operation
        cout << "\nEnter Number (1) Or (2) Or (3) Or (4): ";
        cin >> cto;

        // Exponentiation operation
        if (cto == 1)
        {
            cout <<"You have chosen the exponentiation operation."<<endl;
            cout << "Enter the number and power ." << endl;
            int num, power;
            cout << "Enter a number: ";
            cin >> num;

            cout << "Enter the number of times to square it: ";
            cin >> power;

            cout << "The square: " << square(num, power) << endl;
        }
        // Even/Odd check operation
        else if (cto == 2)
        {
            cout <<"You have chosen a comparison operation if the number is even or odd."<<endl;
            cout << "You can only enter 4 numbers so far." << endl;
            int nums[4];
            int count = size(nums);
            cout << "Enter 4 numbers: " << endl;

            for (int i = 0; i < count; i++)
            {
                cin >> nums[i];
            }

            cout << "The even and odd numbers are: " << endl;
            even(nums, count);
        }
        // Average calculation operation
        else if (cto == 3)
        {
            cout <<"You have chosen the average operation."<<endl;
            cout << "You can only enter 4 numbers so far." << endl;

            double Numbers[4];
            int sizeNum = size(Numbers);
            cout << "Enter 4 numbers to calculate the average: " << endl;

            for (int i = 0; i < sizeNum; i++)
            {
                cin >> Numbers[i];
            }

            cout << "The average of the numbers is: " << avg(Numbers, sizeNum) << endl;
        }else if (cto ==4)
        {
            cout <<"You have chosen the factorial operation."<<endl;
            int fct;
            cout << "\nEnter a number to calculate its factorial: ";
            cin>> fct;
            cout << factorial(fct) <<endl;
        }
        // Invalid input handling
        else
        {
            cout << "Invalid input, please enter 1,2,3, or 4." << endl;
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