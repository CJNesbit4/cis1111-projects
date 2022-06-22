//CJ Nesbit
//June 6 2022
//Relational Operators
//Simulates a price-guessing show. The user guesses the price of an item. If the guess is within a certain accepted %, they 'win' and recieve a success message.

#include <iostream>
using namespace std;

int main()
{
	int userSelect, mousePrice = 75, monitorPrice = 220, phonePrice = 880, cardPrice = 2000;
	double userGuess;
	
	cout << "Welcome to the 'Price you Pay' show! Today's feature: Technology Edition!\n"; 
	cout << "1. Glorious Model O Gaming Mouse.\n";
	cout << "2. 24 inch gaming monitor.\n";
	cout << "3. New iPhone 12.\n";
	cout << "4. NVIDIA RTX 3090 Ti Graphics Card.\n";
	cout << endl;

	cout << "Please enter the number that corresponds with the item who's price you would like to guess: ";
	cin >> userSelect;
	cout << endl;
	cout << "Please enter your guess: $";
	cin >> userGuess;
	cout << endl;

	if (userSelect == 1) {
		if (mousePrice >= (userGuess * 0.88) && mousePrice <= (userGuess * 1.12)) {
			cout << "Congratulations! Your guess was within the accepted range! You have won!\n";
		}
		else {
			cout << "Your guess was not within the accepted range. The price of the item is $" << mousePrice << ".\n";
		}
	}
	
	if (userSelect == 2) {
		if (monitorPrice >= (userGuess * 0.90) && monitorPrice <= (userGuess * 1.1)) {
			cout << "Congratulations! Your guess was within the accepted range! You have won!\n";
		}
		else {
			cout << "Your guess was not within the accepted range. The price of the item is $" << monitorPrice << ".\n";
		}
	}

	if (userSelect == 3) {
		if (phonePrice >= (userGuess * 0.95) && phonePrice <= (userGuess * 1.05)) {
			cout << "Congratulations! Your guess was within the accepted range! You have won!\n";
		}
		else {
			cout << "Your guess was not within the accepted range. The price of the item is $" << phonePrice << ".\n";
		}
	}


	if (userSelect == 4) {
		if (cardPrice == userGuess) {
			cout << "Congratulations! Your guess was correct! You have won!\n";
		}
		else {
			cout << "Your guess was not correct. The price of the item is $" << cardPrice << ".\n";
		}
	}
}