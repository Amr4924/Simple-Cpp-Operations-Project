/*
 * Smart Calculator - Mathematical Operations Header
 * Copyright (c) 2025 Amr Saadawy (@Amr4924)
 *
 * LICENSE: Educational Use Only
 * This software is licensed for EDUCATIONAL PURPOSES ONLY.
 * Commercial use is strictly prohibited.
 * See LICENSE file for full terms and conditions.
 *
 * Contact: https://www.linkedin.com/in/amr-sa3dwy-53a51a343
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>

void Welcome(std::vector<std::string> hello);
// Function to perform basic arithmetic operations with operation history
double BasicOperations(std::vector<double> nums, std::vector<char> printOp);
//[1] Function to calculate the power of a number using loops
int exponent(int numOne, int os);
//[2] Function to check if each number in a vector is even or odd
void even(std::vector<int> nums);
//[3] Function to calculate the average of numbers in a vector
double avg(std::vector<double> nums);
//[4] Function to calculate the factorial of a number
int factorial(long long int fct);
//[5] Function to calculate the area of a triangle using basic formula (Area = base × height / 2)
double AreaOfTriangle(double Base, double Height);
//[6] Function to calculate the area of a triangle using Heron's formula
double Heron(double HeightOne, double HeightTwo, double HeightThree);
//[7] Function to calculate the perimeter of a triangle (sum of all three sides)
double PerimeterOfTriangle(double HeightOne, double HeightTwo, double HeightThree);
//[8] Function to convert between different length units (cm, m, km)
std::string LengthConversion(double value, int option);
//[9] Function to convert between different area units (cm², m², km²)
std::string ConvertSpaces(double value, int option);
//[10] Function to check if a number is prime (divisible only by 1 and itself)
bool isprime(int num);
//[11] Function to display advertisements and social media links
void ads();
//[12] Function to display a simple list of options
void list(std::vector<std::string> ls);
//[13] Function to display formatted menu with borders
void menu(std::vector<std::string> lis);
//[14] Function to display sub-menu with description and options
void SubMenu(std::vector<std::string> Sm, std::string mg);
//[15] Function to display menu with special formatting for specific operations
void MenuBP(std::vector<std::string> Sm,std::string mg);
//[16] Function to display conversion menu with formatted options
void MenuConvert(std::vector<std::string> MC);
#endif