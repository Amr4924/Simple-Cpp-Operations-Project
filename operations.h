#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>

// Function to display menu options
void options(std::vector<std::string> option);
// Function to perform basic arithmetic operations with operation history
double BasicOperations(std::vector<double> nums,std::vector<char> printOp);
//[1] Function to calculate the power of a number using loops
int exponent(int numOne, int os);
//[2] Function to check if each number in a vector is even or odd
void even(std::vector<int> nums);
//[3] Function to calculate the average of numbers in a vector
double avg(std::vector<double> nums);
//[4] Function to calculate the factorial of a number
int factorial(long long int fct);
//[5] Function to calculate the area of a triangle using basic formula
double AreaOfTriangle(double Base, double Height);
//[6] Function to calculate the area of a rectangle using basic formula
double Heron(double HeightOne, double HeightTwo, double HeightThree);
//[7] Function to calculate the area of a circle using basic formula
double PerimeterOfTriangle(double HeightOne, double HeightTwo, double HeightThree);
//[8] Function to calculate the area of a circle using basic formula
std::string LengthConversion(double value, int option);
//[9] Function to convert between different area units
std::string ConvertSpaces(double value, int option);

#endif