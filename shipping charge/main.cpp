/*
Code File Name: Chapter4Exercise2.cpp
Programmer: Maya Moton
Due Date: 04/12/2026

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weight, rate, totalPrice;
    int distance;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter distance (miles): ";
    cin >> distance;

//making sure sure everythig is valid
    if (weight <= 0 || weight > 20)
        cout << "Invalid weight." << endl;
    else if (distance < 10 || distance > 3000)
        cout << "Invalid distance." << endl;
    else
    {
        
// Determine the rate for shipping based on the weight of the package
        if (weight <= 2)
            rate = 1.10;
        else if (weight <= 6)
            rate = 2.20;
        else if (weight <= 10)
            rate = 3.70;
        else
            rate = 4.80;

        totalPrice = ceil(distance / 500.0) * rate;
        cout << "Shipping charges: $" << totalPrice << endl;
    }
    return 0;
}
