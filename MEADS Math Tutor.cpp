//CJ Nesbit
//June 21 2022
//MEADS Math Tutor
//The program offers the user five different math subjects to practice on. The numbers for each problem are randomized, meaning the user will get different output each time.
#include <iostream>
#include <cmath>
#include <string>
#include <random>
using namespace std;

int main() {
	int userAnswer, correctAnswer, userSelect, gen1, gen2;  //userAnswer is the user's answer input, correctAnswer is generated based on the selection and random numbers, userSelect is the input for the menu, gen1 and gen2 are the numners generated from the random number engine.
	string userName; //For the user's name

	cout << "Welcome to MEADS Math Tutor!\n";
	cout << "Please enter your name: ";
	getline(cin, userName); //Allows the user to enter the full name
	cout << endl;
	
	cout << "Welcome to MEADS Math Tutor, " << userName << ". There are five options!\n"; //Uses the userName string and prints it back to the user
	cout << "1. Addition Pratice.\n";
	cout << "2. Subraction Practice.\n";
	cout << "3. Multiplication Practice.\n";
	cout << "4. Division Practice.\n";
	cout << "5. Exponent Practice.\n";
	cout << "Which one would you like to select? ";
	cin >> userSelect;

	if (userSelect >= 1 && userSelect <= 5) { //Validates the the user's selected number is within the accepted range
		if (userSelect == 1) { //Runs the Addition Practice Functions
			random_device engine; //This random number generator was found in the textbook (Program 3-25)
			int MIN = 1, MAX = 50;
			uniform_int_distribution <int> result(MIN, MAX);
			gen1 = result(engine);
			uniform_int_distribution <int> result2(MIN, MAX);
			gen2 = result2(engine);
			
			cout << endl;
			cout << "What is " << gen1 << " + " << gen2 << "? Enter your answer here: "; //Prompts the user for an answer using the generated numbers
			cin >> userAnswer; //Takes the user's answer
			correctAnswer = gen1 + gen2; //Finds the correct answer
			
			if (userAnswer == correctAnswer) { //Runs if the user's answer matches the correct answer
				cout << endl << "Congrats! That is the correct answer!\n";
				return 1;
			}
			else { //Runs if the user's answer does not match the correct answer
				cout << endl << "Sorry, but the correct answer was " << correctAnswer << ".\n";
				return 0;
			}
		}
		if (userSelect == 2) {
			random_device engine;
			int MIN = 1, MAX = 49;
			uniform_int_distribution <int> result(MIN, MAX);
			gen1 = result(engine);
			MIN = 50, MAX = 100;
			uniform_int_distribution <int> result2(MIN, MAX);
			gen2 = result2(engine);

			cout << endl;
			cout << "What is " << gen2 << " - " << gen1 << "? Enter your answer here: "; //Prompts the user for an answer using the generated numbers
			cin >> userAnswer;
			correctAnswer = gen2 - gen1;
			
			if (userAnswer == correctAnswer) { //Runs if the user's answer matches the correct answer
				cout << "Congrats! That is the correct answer!\n";
				return 2;
			}
			else { //Runs if the user's answer does not match the correct answer
				cout << endl << "Sorry, but the correct answer was " << correctAnswer << ".\n";
				return 0;
			}
		}
		if (userSelect == 3) {
			random_device engine;
			int MIN = 1, MAX = 12; //It is almost standard that kids in 3rd - 4th grade learn their times tables through 12
			uniform_int_distribution <int> result(MIN, MAX);
			gen1 = result(engine);
			uniform_int_distribution <int> result2(MIN, MAX);
			gen2 = result2(engine);

			cout << endl;
			cout << "What is " << gen1 << " * " << gen2 << "? Enter your answer here: "; //Prompts the user for an answer using the generated numbers
			cin >> userAnswer; 
			correctAnswer = gen1 * gen2;
			
			if (userAnswer == correctAnswer) { //Runs if the user's answer matches the correct answer
				cout << "Congrats! That is the correct answer!\n";
				return 3;
			}
			else { //Runs if the user's answer does not match the correct answer
				cout << endl << "Sorry, but the correct answer was " << correctAnswer << ".\n";
				return 0;
			}
		}
		if (userSelect == 4) {
			random_device engine;
			int MIN = 10, MAX = 100;
			uniform_int_distribution <int> result(MIN, MAX);
			gen1 = result(engine);
			MIN = 1, MAX = gen1 / 2; //gen1 divided by two makes sure that the user does not get questions like 50 / 46 all the time
			uniform_int_distribution <int> result2(MIN, MAX);
			gen2 = result2(engine);

			cout << endl;
			cout << "What is " << gen1 << " / " << gen2 << "? If there is a remainder, discard it or round down to the nearest whole number. Enter your answer here: "; //Prompts the user for an answer using the generated numbers
			cin >> userAnswer;
			correctAnswer = gen1 / gen2;

			if (userAnswer == correctAnswer) { //Runs if the user's answer matches the correct answer
				cout << "Congrats! That is the correct answer!\n";
				return 4;
			}
			else { //Runs if the user's answer does not match the correct answer
				cout << endl << "Sorry, but the correct answer was " << correctAnswer << ".\n";
				return 0;
			}
		}
		if (userSelect == 5) {
			random_device engine;
			int MIN = 1, MAX = 10;
			uniform_int_distribution <int> result(MIN, MAX);
			gen1 = result(engine);
			MIN = 1, MAX = 4; //Set lower so that the answer is not extremely large
			uniform_int_distribution <int> result2(MIN, MAX);
			gen2 = result2(engine);

			cout << endl;
			cout << "What is " << gen1 << " to the power of " << gen2 << "? Enter your answer here: "; //Prompts the user for an answer using the generated numbers
			cin >> userAnswer;
			correctAnswer = pow(gen1, gen2);

			if (userAnswer == correctAnswer) { //Runs if the user's answer matches the correct answer
				cout << "Congrats! That is the correct answer!\n";
				return 5;
			}
			else { //Runs if the user's answer does not match the correct answer
				cout << endl << "Sorry, but the correct answer was " << correctAnswer << ".\n";
				return 0;
			}
		}
	}
	else { //Runs if the user's selection was not within the accepted range
		cout << "That's not an option. Please restart the program and enter in accepted input.\n";
		return 0;
	}
}