//CJ Nesbit
//May 24 2022
//Declaring Variables Part One
//This program displays information about a fictional theme park.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string parkName("Ehtreal Artifice"), coaster1("Ragnarok"), coaster2("Celestial Force"), coaster3("Omicron"), attraction1("Sunset Sandstorm");
    double entryFee = 19.99;
    cout << "Welcome to " << parkName << ", the best theme park in the world!\n";
    cout << "We feature several great coasters, such as " << coaster1 << ", a gigacoaster for the most daring of thrillseekers.\n";
    cout << "Next we have " << coaster2 << ", a wild inverted coaster.\n";
    cout << "Finally, we feature " << coaster3 << ", an adrenaline rushing stand-up coaster!\n";
    cout << "We also have fun family attractions, like " << attraction1 << ", a Wild West themed laser tag.\n";
    cout << "Park entry is the very low cost of $" << entryFee << "!\n";
    return 0;

    
}


