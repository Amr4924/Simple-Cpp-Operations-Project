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
    cout << "=====================================\n";
    cout << "     Smart Calculator Installed!     \n";
    cout << "=====================================\n";
    cout << "\n";

    char choice; // Variable to store user's choice to repeat the program

    do
    {
        // Display the available operations menu
        vector<string> option =
        {
            "[1] The first operation is basic arithmetic operations.",
            "[2] The second operation is the process of calculating the exponent.",
            "[3] The third operation is the process of checking if the numbers are even or odd.",
            "[4] The fourth operation is the process of calculating the average of four numbers.",
            "[5] The fifth  operation is the process of calculating the factorial of a number.",
            "[6] The sixth operation is the process of calculating the area and perimeter of a triangle.",
            "[7] The seventh operation is the process of converting between different units of length and area."
        };

        // Display menu options
        options(option);

        int cto; // Variable to store the user's selected operation
        cout << "\nEnter Number (1) Or (2) Or (3) Or (4) Or (5) Or (6) Or (7): ";
        cin >> cto;

        system("cls");
        // Basic arithmetic operations (1)
        if (cto == 1)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen the basic arithmetic operations." << endl;
            cout << "*******************************" << endl;

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
            int number;

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
        else if (cto == 6)
        {
            cout << "*******************************" << endl;
            cout << "You have chosen The process of calculating the area and perimeter of a triangle." << endl;
            cout << "*******************************" << endl;

            int chops;
            cout << "Choose the area or perimeter" << endl;
            vector<string> ops =
            {
                "|1| Area: [1]The basic law of area and [2] Heron's law",
                "|2| Perimeter of triangle"
            };
            for (string v : ops)
            {
                cout << v << endl;
            }
            cout << ": ";
            cin >> chops;

            if (chops == 1)
            {
                int carea;
                vector<string> area =
                {
                    "[1]The basic law of area and ",
                    "[2] Heron's law"
                };
                for (string ar : area)
                {
                    cout << ar << endl;
                }
                cout << ": ";
                cin >> carea;

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
                cout<<PerimeterOfTriangle(hightOne, hightTwo, hightThree)<<endl;
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
            cout << "*******************************" << endl;
            cout << "You have chosen the conversion process between different units of length and area." << endl;
            cout << "*******************************" << endl;

            int oConvert;
            double value;
            cout << "(1) LengthConversion." << endl;
            cout << "(2) ConvertSpaces." << endl;
            cout << ":";
            cin >> oConvert;

            if (oConvert == 1)
            {
                int chConvertL;
                vector<string> convert =
                {
                    "|1| Convert from (cm) to (m).",
                    "|2| Convert from (m) to (cm).",
                    "|3| Convert from (m) to (km).",
                    "|4| Convert from (km) to (m)."
                };
                for (string& line : convert)
                {
                    cout << line << endl;
                }
                cout << ": ";
                cin >> chConvertL;
                cout << "Enter The Value" << endl;
                cout << ": ";
                cin >> value;

                cout<< LengthConversion(value,chConvertL) << endl;
            }

            else if (oConvert == 2)
            {
                int chConvertS;
                vector<string> convert =
                {
                    "|1| Convert from (cm²) to (m²).",
                    "|2| Convert from (m²) to (cm²).",
                    "|3| Convert from (m²) to (km²).",
                    "|4| Convert from (km²) to (m²).",
                    "|5| Convert from (cm²) to (km²).",
                    "|6| Convert from (km²) to (cm²)."
                };
                for (string& line : convert)
                {
                    cout << line << endl;
                }
                cout << ": ";
                cin >> chConvertS;
                cout << "Enter The Value" << endl;
                cout << ": ";
                cin >> value;

                cout<< ConvertSpaces(value, chConvertS) << endl;
            }
            else
            {
                cout << "\n<><><><><><><><><><><><><><><><><><><><>" << endl;
                cout << "An error occurred. Please select 1 or 2." << endl;
                cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
            }


        }
            // Invalid input handling
            else
            {
                cout << "Invalid input, please enter 1, 2, 3, 4, 5, 6, or 7." << endl;
                
            }

            // Ask user if they want to repeat the program
            cout << "\nDo you want to continue? (y/n): ";
            cin >> choice;

            system("cls");
        } while (choice == 'y' || choice == 'Y'); // Repeat if user enters 'y' or 'Y'

        system("cls");
        // Exit message
        cout << "\n=====================================\n";
        cout << "     Smart Calculator Exited!       \n";
        cout << "Thank you for using the program!" << endl;
        cout << "=====================================\n";


        system("start chrome https://www.linkedin.com/in/amr-sa3dwy-53a51a343");
        system("start chrome https://www.tiktok.com/@3mr675");
        system("start chrome https://github.com/Amr4924");
        return 0;
    }