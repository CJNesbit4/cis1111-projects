//CJ Nesbit
//May 28 2022
//Expression Exercise 1
//Given the amount of types of people in a group, this program calculates the price of visiting Yellowbone International Park and how many tour guides the group will have.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int adultCount, childCount, studentCount; //Declares variables that will collect how many people are in the group and the prices for each.
	double adultCost, childCost, studentCost, taxAmount, tourGuides, adultPrice = 10.00, childPrice = 5.00, studentPrice = 7.00, ticketTotal, totalBill; //Declares variables that will be used to calculate the prices and total bill.
	string leaderName; //Declares a string that will be used later to collect the name of the leader.

	cout << "Welcome to Yellowbone International Park!\n" << endl; //Prints the park name
	cout << "Our ticket prices are: \n" << "Adult: $" << adultPrice << endl << "Child: $" << childPrice << endl << "Student: $" << studentPrice << endl << endl; //Prints the prices
	
	cout << "Enter the amount of adults in the group: "; //Input-Output stream that collects the amount of people in the group
	cin >> adultCount;
	cout << endl << "Enter the amount of children in the group: ";
	cin >> childCount;
	cout << endl << "Enter the amount of students in the group: ";
	cin >> studentCount;
	
	cout << endl << "Please enter the full name of the group leader: "; //Prompts the user for their name
	cin.ignore(); //Ignores the enter key pressed on the last cin function
	getline(cin, leaderName); //Places the user's input into leaderName string
	tourGuides = (static_cast<double>(adultCount) + static_cast<double>(childCount) + static_cast<double>(studentCount)) / 3; //Converts the count into floating point to divide and get an accurate number
	cout << endl << "Welcome to Yellowbone, " << leaderName << ". Your group shall have " << ceil(tourGuides) << " tour guides." << endl << endl; //Rounds the decimal up
	
	adultCost = adultPrice * static_cast<double>(adultCount); //Calculates the total cost for the adults
	childCost = childPrice * static_cast<double>(childCount); //Calculates the total cost for the children
	studentCost = studentPrice * static_cast<double>(studentCount); //Calculates the total cost for the students
	ticketTotal = adultCost + childCost + studentCost; //Calculates the total cost for the tickets
	taxAmount = 0.07 * ticketTotal; //Calculates the tax, 7% in this case
	totalBill = ticketTotal + taxAmount; //Adds the tax to the total bill

	cout << fixed << setprecision(2); //Sets the precision to 2 digits so 30 becomes 30.00
	cout << "Your total bill is: \n";
	cout << left << "Adult Tickets: " << setw(20) << right << adultCost << endl; //Prints the category on the left and the price on the right
	cout << left << "Child Tickets: " << setw(20) << right << childCost << endl;
	cout << left << "Student Tickets: " << setw(18) << right << studentCost << endl;
	cout << left << "Ticket Totals: " << setw(20) << right << ticketTotal << endl;
	cout << left << "Tax Amount: " << setw(23) << right << taxAmount << endl;
	cout << left << "Total Bill: " << setw(23) << right << totalBill << endl;
	
	return 0;
}