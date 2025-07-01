#include <iostream>
#include <cmath>
using namespace std;    

int square(int numOne, int os)
{
	int result = 1;
    for (int i = 0 ; i < os ; i++ )
    {
		result *= numOne;
    }
	/*cout<< result << endl;*/


    return result;
}

void even(int nums[4], int count)
{
	
    for (int i = 0; i <count ; i++)
    {
        if (nums[i] % 2 == 0)
        {
			cout<<"The Number " << "[ " << nums[i] << " ]" << " is even" << endl;
        }
        else
        {
			cout << "The Number " << "[ " << nums[i] << " ]" << " is odd" << endl;
        }

        
    }
    /*cout<< result << endl;*/


    return ;
}

int avg(double nums[4],int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += nums[i];
    }

    double average = sum / count;
     
    return average;
}

int main()
{
    char choice;
    do
    {
        string proces[3] = 
        {
        "[1] The first operation is the process of calculating the exponent.",
        "[2] The second operation is the process of checking if the numbers are even or odd.",
		"[3] The third operation is the process of calculating the average of four numbers."
        };

        for (int i = 0; i < 3; i++)
        {
            cout << proces[i] << endl;
        }
        
        int x;
        cout << "\nEnter Number (1) Or (2) Or (3): ";
        cin >> x;
        if (x == 1)
        {
            int num, os;

            cout << "Enter a number: ";
            cin >> num;

            cout << "Enter the number of times to square it: ";
            cin >> os;

            cout << "The square: " << square(num, os) << endl;

        }
        else if (x == 2)
        {
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
        else if (x == 3)
        {
            double Numbers[4];
            int sizeNum = size(Numbers);
			cout << "Enter 4 numbers to calculate the average: " << endl;
            for (int i = 0; i < sizeNum; i++) 
            {
				cin >> Numbers[i];
            }
			cout << "The average of the numbers is: " << avg(Numbers, sizeNum) << endl;
        }
        else
        {
            cout << "Invalid input, please enter 1 or 2." << endl;
        }


		
        cout<< "\nDo you want to continue? (y/n): ";
		cin >> choice;

    } while (choice == 'y' ||choice =='Y');

	cout << "Thank you for using the program!" << endl;

	return 0;
}