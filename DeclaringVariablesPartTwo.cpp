//CJ Nesbit
//May 24 2022
//Declaring Variables Part Two
//This program displays the current college term, what classes I am taking in said term, and how many credit hours the classes are worth.
//If only 1 class is being taken, the program will print 'class' (singular) instead of 'classes' (plural).

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string currentTerm("Summer 2022"), className1("CIS 1111");
    int classHours1 = 3, amountOfClasses = 1;
    if (amountOfClasses == 1) {
        cout << "The current term is " << currentTerm << ". During this term I am taking " << amountOfClasses << " class.\n";
        cout << "The class is " << className1 << ". It is worth " << classHours1 << " credit hours.\n";
    }
    else {
        cout << "The current term is " << currentTerm << ". During this term I am taking " << amountOfClasses << " classes.\n";
        cout << "The first class is " << className1 << ". It is worth " << classHours1 << " credit hours.\n";
        //Enter in more lines describing the other classes. However, I am only taking 1 class this term, so continuing the program here is unnecessary. 
    }
    return 0;
}
