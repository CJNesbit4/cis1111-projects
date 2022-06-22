//CJ Nesbit
//May 28 2022


#include<iostream>
#include<string>

using namespace std;

int main() {
	string userName;
	double userNum, squaredNum;
	cout << "Please input a number: ";
	cin >> userNum;
	cout << "\nPlease enter your full name: ";
	cin.ignore();
	getline(cin, userName);
	squaredNum = userNum * userNum;
	cout << "\nThank you, " << userName << ". The square of your number is: " << squaredNum;
	cout << endl << endl;
	system("pause");
	return 0;
}
