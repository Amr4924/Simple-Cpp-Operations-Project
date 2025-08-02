#include "operations.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;


void list(vector<string> ls)
{
	for (auto& s : ls)
	{
		cout << s << endl;
	}
}

void Welcome(vector<string> hello)
{
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|                      Welcome Smart Calculator                      |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|  A powerful C++ console tool for performing various calculations.  |" << endl;
	cout << "|  Features include:                                                 |" << endl;
	cout << "|    - Basic math operations ( + , - , * , / )                       |" << endl;
	cout << "|    - Triangle area & perimeter (normal & Heron's formula)          |" << endl;
	cout << "|    - Unit conversions (length & area)                              |" << endl;
	cout << "|    - Prime number checking (single & range)                        |" << endl;
	cout << "|                                                                    |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|                             Options                                |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|                                                                    |" << endl;
	list(hello);
	cout << "|                                                                    |" << endl;
	cout << "|                                                                    |" << endl;
	cout << "|   Developed by: Amr (SA3DWY)                                       |" << endl;
	cout << "|____________________________________________________________________|" << endl;
	cout << "......................>> Select Options <<................."<<endl;
	cout << ">:";

}

void menu(vector<string> lis)
{
	cout << "|-----------------------------------------------------------------------------------------------------|" << endl;
	cout << "|                                               Menu                                                  |" << endl;
	cout << "|-----------------------------------------------------------------------------------------------------|" << endl;
	cout << "|                                                                                                     |" << endl;
	list(lis);
	cout << "|                                                                                                     |" << endl;
	cout << "|_____________________________________________________________________________________________________|" << endl;
	cout << "...........................>> Select Options <<......................" << endl;
	cout << ">:";




}
void MenuBP(vector<string> Sm,string mg)
{
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << mg;
	cout << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|    Options:                                                        |" << endl;
	cout << "|                                                                    |" << endl;
	list(Sm);
	cout << "|                                                                    |" << endl;
	cout << "|____________________________________________________________________|" << endl;
	cout << "......................>> Select Options <<................." << endl;
	cout << ">:";

}
void SubMenu(vector<string> Sm,string mg)
{
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << mg;
	cout << endl;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|                                                                                                 |" << endl;
	list(Sm);
	cout << "|                                                                                                 |" << endl;
	cout << "|_________________________________________________________________________________________________|" << endl;


}


void MenuConvert(vector<string> MC)
{
	cout << "|-------------------------------------------------------|" << endl;
	cout << "|                        CONVERT                        |" << endl;
	cout << "|-------------------------------------------------------|" << endl;
	cout << "|                                                       |" << endl;
	list(MC);  // Display conversion options
	cout << "|                                                       |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << " ......>> Please select an option <<......" << endl;
	cout << ">:";
}
