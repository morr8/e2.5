/*
 •• E2.5
 Write a program that prompts the user for two integers and then prints
 
 •The distance (absolute value of the difference)
 •The maximum (the larger of the two)
 •The minimum (the smaller of the two)
 Hint: The max and min functions are defined in the <algorithm> header.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int integer1;
    int integer2;
    cout << "Enter integer1: ";
    cin >> integer1;
    cout << "Enter integer2: ";
    cin >> integer2;
    
    cout << "The distance between " << integer1 << " and " << integer2 << " = " << abs(integer2 - integer1) << endl;
    cout << "The maximum of " << integer1 << " and " << integer2 << " = " << max(integer1, integer2) << endl;
    cout << "The minimum of " << integer1 << " and " << integer2 << " = " << min(integer1, integer2) << endl;
    
    
    
}
