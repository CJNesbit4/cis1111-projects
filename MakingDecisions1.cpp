//CJ Nesbit
//June 5 2022
//Making Decisions 1
//Displays movies and their ratings and determines if the user can watch the desired movie without a parent/guardian.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int movieNum, userAge;
	string parentStatus;

	cout << "Welcome to CIS Theater!\n";
	cout << "Our featured films are as follows: \n";
	cout << "1. Aladdin (Rated G)\n";
	cout << "2. Jumanji (Rated PG)\n";
	cout << "3. Mrs. Doubtfire (Rated PG-13)\n";
	cout << "4. The Birdcage (Rated R)\n";
	cout << endl;

	cout << "Please enter the number of the desired movie: ";
	cin >> movieNum;
	cout << endl << endl;
	cout << "Please enter your age (in years): ";
	cin >> userAge;
	cout << endl;
	
	if (movieNum == 1)
	{
		cout << "Thank you for purchasing tickets for Aladdin. Enjoy the show!";
		return 1;
	}
	
	cout << "Is a parent aware you are watching this movie? Type Y for yes and N for no. ";
	cin >> parentStatus;
	cout << endl; 

	if (movieNum == 2)
	{
		if (parentStatus == "Y")
			cout << "Thank you for puchasing tickets for Jumanji. Enjoy the show!";
		else if (parentStatus == "N")
			cout << "You need parent permission to view Jumanji, sorry.";
		return 2;
	}

	if (movieNum == 3)
	{
		if (userAge >= 13)
			cout << "Thank you for purchasing tickets for Mrs. Doubtfire. Enjoy the show!";
		else if (parentStatus == "Y")
			cout << "Thank you for purchasing tickets for Mrs. Doubtfire. Enjoy the show!";
		else if (parentStatus == "N")
			cout << "Sorry, but you need parent permission to watch this film until you turn 13.";
		return 3;
	}
	
	if (movieNum == 4)
	{
		if (userAge >= 17)
			cout << "Thank you for purchasing tickets for The Birdcage. Enjoy the show!";
		else if (parentStatus == "Y")
			cout << "Thank you for purchasing tickets for The Birdcage. Enjoy the show!";
		else if (parentStatus == "N")
			cout << "Sorry, but you need parent permission to watch this film until you turn 17.";
		return 4;
	}
	
}