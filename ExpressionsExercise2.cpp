//CJ Nesbit
//May 28 2022
//Expressions Exercise 2
//This program calculates the estimate cost for a security plan for a company based on the amount of computers entered in by the user.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int computerAmount, firewallAmount;
    double computerPrice = 50, firewallPrice = 125, consultFee = 200, computerFee, firewallFee, priceTotal;
    string companyName;
    cout << fixed << setprecision(2);
    cout << "Welcome to Integrity Security Solutions." << endl;
    cout << "These are our standard security prices: " << endl;
    cout << left << "Fee for each computer: " << right << setw(20) << computerPrice << endl;
    cout << left << "Fee for each firewall device: " << right << setw(13) << firewallPrice << endl;
    cout << left << "Consultation Fee: " << right << setw(25) << consultFee << endl << endl;
    
    cout << "Please enter your company's name: ";
    getline(cin, companyName);
    cout << endl;
    cout << "Please enter the amount of computers on the network: ";
    cin >> computerAmount;
    cout << endl << endl;

    firewallAmount = ceil(static_cast<double>(computerAmount) / 6);
    computerFee = computerPrice * computerAmount;
    firewallFee = firewallPrice * firewallAmount;
    priceTotal = computerFee + firewallFee + consultFee;

    cout << "Here is the cost estimate for " << companyName << ":\n";
    cout << fixed << setprecision(2);
    cout << left << "Computer Fees: " << right << setw(15) << computerFee << endl;
    cout << left << "Firewall Fees: " << right << setw(15) << firewallFee << endl;
    cout << left << "Consulting Fees: " << right << setw(13) << consultFee << endl;
    cout << left << "Total Bill: " << right << setw(18) << priceTotal;
    
    return 0;
}