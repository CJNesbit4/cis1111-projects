//CJ Nesbit
//May 25 2022
//Basic Math Buzz Lightyear Problem
//Calculates Buzz Lightyear's rate of travel using C++ operators. 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double trip1Time = 2.3, fuelRate = 12.75, distance1 = 77891, distance2 = 24812, distance3 = 163628; //Declares the constants provided in the assignment table
    double travelRate, trip2Time, trip2Fuel, trip3Time, trip3Fuel; //Declares the variables that the program will calculate
    travelRate = distance1 / trip1Time;  //Calculates the rate of travel using the formula distance divided by time
    
    trip2Time = distance2 / travelRate; //Trip 2 Calculations
    trip2Fuel = trip2Time * fuelRate;

    trip3Time = distance3 / travelRate; //Trip 3 Calculations
    trip3Fuel = trip3Time * fuelRate;

    cout << "Buzz Lightyear's Speed is " << travelRate << " miles per minute.\n";
    cout << "Buzz Lightyear can make trip 2 in " << trip2Time << " minutes. This would burn " << trip2Fuel << " gallons of fuel.\n";
    cout << "Buzz Lightyear can make trip 3 in " << trip3Time << " minutes. This would burn " << trip3Fuel << " gallons of fuel.\n";

    return 0;
}

