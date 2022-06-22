//CJ Nesbit
//June 5 2022
//Making Decisions 2
//This program filters out even from odd numbers. If an odd number is entered, the program will reject it as invalid input.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int userNum, oddOrEven;
	
	cout << "Please enter an even number: ";
	cin >> userNum;
	cout << endl;
	oddOrEven = userNum % 2;

	if (oddOrEven == 0)
	{
		cout << "Thank you for entering the even number " << userNum << ".";
	}
	else if (oddOrEven == 1)
	{
		cout << "The number you entered, " << userNum << ", was rejected as invalid input. It is odd, not even.";
	}
	return 0;
}