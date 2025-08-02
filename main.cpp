/*
 * Smart Calculator - Advanced Mathematical Operations
 * Copyright (c) 2025 Amr Saadawy (@Amr4924)
 *
 * LICENSE: Educational Use Only
 * This software is licensed for EDUCATIONAL PURPOSES ONLY.
 * Commercial use is strictly prohibited.
 * See LICENSE file for full terms and conditions.
 *
 * Contact: https://www.linkedin.com/in/amr-sa3dwy-53a51a343
 */

#include "operations.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> Options =
    {
        "|     >>[1] Start program.                                           |",
        "|     >>[0] End program.                                             |",

    };

    Welcome(Options);

    char again; // Variable to store user's choice to repeat the program
    int choice;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        do
        {
            // Display the available operations menu
            vector<string> option =
            {
                "| >[1] The first operation is basic arithmetic operations.                                            |",
                "|                                                                                                     |",
                "| >[2] The second operation is the process of calculating the exponent.                               |",
                "|                                                                                                     |",
                "| >[3] The third operation is the process of checking if the numbers are even or odd.                 |",
                "|                                                                                                     |",
                "| >[4] The fourth operation is the process of calculating the average of four numbers.                |",
                "|                                                                                                     |",
                "| >[5] The fifth operation is the process of calculating the factorial of a number.                   |",
                "|                                                                                                     |",
                "| >[6] The sixth operation is the process of calculating the area and perimeter of a triangle.        |",
                "|                                                                                                     |",
                "| >[7] The seventh operation is the process of converting between different units of length and area. |",
                "|                                                                                                     |",
                "| >[8] The eighth operation is checking if a number is prime by testing its divisibility.             |"
            };

            // Display menu options
            menu(option);

            int cto; // Variable to store the user's selected operation
            cin >> cto;

            system("cls");
            // Basic arithmetic operations (1)
            if (cto == 1)
            {

                // Vectors to store numbers and operations
                vector<double> nums;
                vector<char> printOp;
                // Available operations array


                // Display final result

                cout << "result: " << BasicOperations(nums, printOp) << endl;
                cout << "******************\n";
            }

            // Exponentiation operation (2)
            else if (cto == 2)
            {
                string ms1 = "|                         You have chosen the exponentiation operation.                           |";
                vector<string> ls4
                {
                    "|    Description:                                                                                 |" ,
                    "|    Raises a base number to the power of an exponent.                                            |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|    2^3 = 2 * 2 * 2 = 8                                                                          |"
                };

                SubMenu(ls4, ms1);


                cout << "Enter the number and power ." << endl;
                int num, power,count=1;
                cout <<"# "<<count << " Enter The number: ";
                cin >> num;
                count++;

                cout << "# " << count << " Enter the number of times to square it: ";
                cin >> power;

                cout << "The square: " << exponent(num, power) << endl;
            }
            // Even/Odd check operation (3)
            else if (cto == 3)
            {
                string checkEven = "|              You have chosen a comparison operation if the number is even or odd.               |";
                vector<string> ls2
                {
                    "|    Description:                                                                                 |" ,
                    "|    Determines whether a number is even or odd using modulus division.                           |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|    7 % 2 = 1 -> Odd, 8 % 2 = 0 -> Even                                                          |"
                };

                SubMenu(ls2, checkEven);

                cout << "Enter (0) when you finish entering the numbers: " << endl;
                vector<int> nums;
                int number;
                int count = 1;
                // Loop to get numbers until user enters 0
                while (true)
                {
                    cout << "# (" << count<<"): ";
                    cin >> number;
                    if (number == 0) // Stop when user enters 0
                    {
                        break;
                    }
                    nums.push_back(number); // Add number to vector
                    count++;
                }
                cout << "The even and odd numbers are: " << endl;
                even(nums); // Call function to check even/odd
            }

            // Average calculation operation (4)
            else if (cto == 4)
            {
                string ms1 = "|                            You have chosen the average operation.                               |";
                vector<string> ls1
                {
                    "|    Description:                                                                                 |" ,
                    "|    The average is the sum of a set of numbers divided by how many numbers there are.            |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|    Average of 3, 5, 7 = (3 + 5 + 7) / 3 = 15 / 3 = 5                                            |"
                };
                
                SubMenu(ls1,ms1);
                cout << "Enter the numbers and when finished press (0) for the result. " << endl;

                vector<double> Numbers;
                double numberTwo;

                // Loop to get numbers until user enters 0
                int count = 1;
                while (true)
                {
                    cout << "#("<<count<<") :";
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
                string ms1 = "|                            You have chosen the Factorial operation.                             |";
                vector<string> ls3
                {
                    "|    Description:                                                                                 |" ,
                    "|    The factorial of a number is the product of all positive integers less than or equal to it.  |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|    5! = 5 * 4 * 3 * 2 * 1 = 120                                                                 |"
                };

                SubMenu(ls3, ms1);
     
                long long int fct;
                cout << "\nEnter a Number To Calculate Its Factorial: ";
                cin >> fct;
                cout << factorial(fct) << endl; // Call factorial function and display result
            }
            else if (cto == 6)
            {
                string ms4 = "|        You have chosen The process of calculating the area and perimeter of a triangle.         |";
                vector<string> ls4
                {
                    "|    Description:                                                                                 |",
                    "|    Calculates the area and perimeter of a triangle using side                                   |",
                    "|    lengths and appropriate formulas.                                                            |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|  - Perimeter:                                                                                   |",
                    "|    a + b + c = 3 + 4 + 5 = 12                                                                   |",
                    "|                                                                                                 |",
                    "|  - Area (using Heron’s formula):                                                                |",
                    "|  . s = (a + b + c) / 2 = 6                                                                      |",
                    "|  . Area = √[s(s - a)(s - b)(s - c)] = √[6(6-3)(6-4)(6-5)] = √[6*3*2*1] = √36 = 6                |",
                    "|                                                                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                            MENU                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                                                                                 |",
                    "| [1] Area: [1]The basic law of area and [2] Heron's law.                                         |",
                    "| [2] Perimeter of triangle.                                                                      |"


                };
                SubMenu(ls4, ms4);

                int chops;
                cout << " ......>> Please select an option <<......" << endl;
                cout << ">:";
                cin >> chops;
                system("cls");
                if (chops == 1)
                {
                    int carea;
                    vector<string> area =
                    {
                        "|    ->[1]The basic law of area and .                                                                 |",
                        "|    ->[2] Heron's law.                                                                               |"
                    };
                    menu(area);
                    cin >> carea;
                    system("cls");
                    if (carea == 1)
                    {
                        double base, height;
                        cout << "Enter the length of the base of the triangle" << endl;
                        cout << ":";
                        cin >> base;

                        cout << "Enter the height" << endl;
                        cout << ":";
                        cin >> height;

                        cout << AreaOfTriangle(base, height) << endl;
                    }

                    else if (carea == 2)
                    {
                        double heightOne, heightTwo, heightThree;
                        cout << "Enter the lengths of the three sides.\n";
                        cout << ": ";
                        cin >> heightOne >> heightTwo >> heightThree;


                        cout << Heron(heightOne, heightTwo, heightThree) << endl;
                    }
                    else
                    {
                        cout << "An error occurred. Please select 1 or 2." << endl;
                    }
                }
                else if (chops == 2)
                {
                    double hightOne, hightTwo, hightThree;
                    cout << "Enter the lengths of the three sides.\n";
                    cout << ": ";
                    cin >> hightOne >> hightTwo >> hightThree;
                    cout << PerimeterOfTriangle(hightOne, hightTwo, hightThree) << endl;
                }
                else
                {
                    cout << "\n<><><><><><><><><><><><><><><><><><><><>" << endl;
                    cout << "An error occurred. Please select 1 or 2." << endl;
                    cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
                }
            }
            else if (cto == 7)
            {
                string ms7 = "|         You have chosen the conversion process between different units of length and area.                           |";
                vector<string> ls7
                {
                    "|    Description:                                                                                 |" ,
                    "|    Converts between different units of measurement for length and area.                         |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|   . Length: 1 meter = 100 centimeters.                                                          |",
                    "|   . Area: 1 square meter = 10,000 square centimeters.                                           |",
                    "|                                                                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                            MENU                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                                                                                 |",
                    "| [1] LengthConversion.                                                                           |",
                    "| [2] ConvertSpaces.                                                                              |"

                };

                SubMenu(ls7, ms7);
                int oConvert;
                double value;
                cin >> oConvert;
                system("cls");
                if (oConvert == 1)
                {
                    int chConvertL;
                    vector<string> convert =
                    {
                        "| [1] Convert from ( cm ) --> ( m ).                    |",
                        "| [2] Convert from ( m )  --> ( cm ).                   |",
                        "| [3] Convert from ( m )  --> ( km ).                   |",
                        "| [4] Convert from ( km ) --> ( m ).                    |"
                    };
                    MenuConvert(convert);
                    cin >> chConvertL;
                    cout << "Enter The Value" << endl;
                    cout << ": ";
                    cin >> value;

                    cout << LengthConversion(value, chConvertL) << endl;
                }

                else if (oConvert == 2)
                {
                    int chConvertS;
                    vector<string> convert =
                    { 
                        "| [1] Convert from ( cm² ) --> (m²).                    |",
                        "| [2| Convert from ( m² )  --> (cm²).                   |",
                        "| [3] Convert from ( m² )  --> (km²).                   |",
                        "| [4] Convert from ( km² ) --> (m²).                    |",
                        "| [5] Convert from (cm²)   --> (km²).                   |",
                        "| [6] Convert from (km²)   --> (cm²).                   |"
                    };
                    MenuConvert(convert);
                    
                    cin >> chConvertS;
                    cout << "Enter The Value" << endl;
                    cout << ": ";
                    cin >> value;

                    cout << ConvertSpaces(value, chConvertS) << endl;
                }
                else
                {
                    cout << "\n<><><><><><><><><><><><><><><><><><><><>" << endl;
                    cout << "An error occurred. Please select 1 or 2." << endl;
                    cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
                }


            }
            else if (cto == 8)
            {
                int pick;
                string ms8 = "|                 You have chosen to check whether the number is prime or not.                    |";
                vector<string> ls8
                {
                    "|    Description:                                                                                 |" ,
                    "|    Checks whether a number is prime by testing if it has any divisors other than 1 and itself   |",
                    "|                                                                                                 |",
                    "|    EX:                                                                                          |",
                    "|   . 7 → Prime (only divisible by 1 and 7).                                                      |",
                    "|   . 9 → Not Prime (divisible by 1, 3, and 9).                                                   |",
                    "|                                                                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                            MENU                                                 |",
                    "|-------------------------------------------------------------------------------------------------|",
                    "|                                                                                                 |",
                    "| [1] Verify one number.                                                                          |",
                    "| [2] Verify Prime Numbers in a Range.                                                            |"

                };
                SubMenu(ls8, ms8);

                cin >> pick;
                system("cls");
                if (pick == 1)
                {
                    int number;
                    cout << "Enter a number to verify" << endl;
                    cout << ">:";
                    cin >> number;
                    if (isprime(number))
                    {
                        cout << number << " \" " << "prime" << " \"" << endl;
                    }
                    else
                    {
                        cout << number << " \" " << "Not prime" << " \"" << endl;
                    }
                }
                else if (pick == 2)
                {
                    int countPrime = 0;
                    int countNotPrime = 0;
                    int start;
                    int end;
                    cout << "--> Enter a start and end to specify prime numbers. <--" << endl;
                    cout << endl;
                    cout << "Enter the beginning" << endl;
                    cout << ">:";
                    cin >> start;

                    cout << "Enter the end" << endl;
                    cout << ">:";
                    cin >> end;
                    for (int i = start; i <= end; ++i)
                    {
                        if (isprime(i))
                        {
                            cout << i << " \" " << "prime" << " \"" << endl;
                            countPrime++;
                        }
                    }
                    cout << "Number of prime numbers: " << countPrime << endl;

                    cout << "--------------------------" << endl;

                    for (int i = start; i <= end; ++i)
                    {
                        if (!isprime(i))
                        {
                            cout << i << " \" " << "Not prime" << " \"" << endl;
                            countNotPrime++;
                        }
                    }
                    cout << "Number of non-prime numbers: " << countNotPrime << endl;
                }
                else
                {
                }
            }
            // Invalid input handling
            else
            {
                cout << "Invalid input, please enter 1, 2, 3, 4, 5, 6, 7, or 8." << endl;

            }

            // Ask user if they want to repeat the program
            cout << "\nDo you want to continue? (y/n): ";
            cin >> again;

            system("cls");
        } while (again == 'y' || again == 'Y'); // Repeat if user enters 'y' or 'Y'
    }
    else if(choice ==0)
    {
        return 0;
    }
    system("cls");
    // Exit message
    cout << "\n=====================================\n";
    cout << "     Smart Calculator Exited!       \n";
    cout << "Thank you for using the program!" << endl;
    cout << "=====================================\n";

    //ads();
    return 0;
}