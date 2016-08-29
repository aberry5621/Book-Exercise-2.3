//
//  main.cpp
//  Book Exercise 2.3
//
//  Created by ax on 8/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  convert feet into meters
//

#include <iostream>
using namespace std;

int main() {
    
    // Program Title
    cout << "Feet to Meters Conversion\n";
    
    // data storage
    double input_feet = 0.0;
    double calc_meter = 0.0;
    
    // I
    // read input numbers as feet
    cout << "Enter a value for feet: ";
    cin >> input_feet;
    
    // P
    // convert input to meters
    // 1 foot = 0.305 meter
    calc_meter = input_feet * 0.305;
    
    // O
    // output result in meters
    cout << input_feet << " feet is " << calc_meter << "meters" << endl;
    
    return 0;
}
