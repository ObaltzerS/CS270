//#include "FitByte.h"
#include "FitByte.h"
#include <iostream>
// Constructor - Initialize all data variables to the initial empty state, 
// with all daily distance and calorie burned totals cleared to 0, 
// and the current day to the first.
FitByte::FitByte()
{



}
// reset - Receives no arguments. 
// Produces the same result as the constructor method and resets variables to the initial empty state.

void FitByte::reset(){

}

// walk - Receives a positive type float value that gives the number of miles to walk. 
// If the given value is positive (greater than zero), then increase the current day's distance total by the given amount of miles and increase the current day's calories burned estimate by 100 * number of miles given.
// No value is returned.

void FitByte::walk(float miles){

}

// nextDay - Receives no arguments. 
// If the current day is not yet the last day of the 7 day week, 
// then increase the current day index by 1 and return the bool value true; otherwise, make no changes and return false.

bool FitByte::nextDay(){

}

// getDaysWalked - Receives no arguments. Returns the number of days walked as an integer between 1 and 7, inclusive. 
// Designate this method as a const method since it does not change an data variables inside the FitByte object.

int FitByte::getDaysWalked() const{

}

// getDistanceByDay - Receives an integer argument between 1 and 7, inclusive. 
// If the given integer value is between 1 and 7 inclusive, then return the total number of miles walked on the specified day as a type float value. 
// Otherwise, return 0 to signal an invalid day. Designate this method as a const method since it does not change an data variables inside the FitByte object. Note that you will need to adjust the given argument to access array elements by indices 0 to 6, inclusive.

float FitByte::getDistanceByDay(int day) const{

}

// getCaloriesByDay - Receives an integer argument between 1 and 7, inclusive. 
// If the given integer value is between 1 and 7 inclusive, then return the total number of calories burned on the specified day as a type float value. 
// Otherwise, return 0 to signal an invalid day. Designate this method as a const method since it does not change an data variables inside the FitByte object. Note that you will need to adjust the given argument to access array elements by indices 0 to 6, inclusive.

float FitByte::getCaloriesByDay(int day) const{

}

// getWeekDistance - Receives no arguments. 
// Returns the total distance walked for all days walked so far. 
// For full credit (rating of Exemplary) your method should only visit the array elements used by the number of days actually walked. 
//Return the total distance as a type float value. Designate this method as a const method since it does not change an data variables inside the FitByte object.

float FitByte::getWeekDistance() const{


}

// getWeekCalories - Receives no arguments. Returns the total calories for all days walked so far. 
// For full credit (rating of Exemplary) your method should only visit the array elements used by the number of days actually walked. 
// Return the total calories as a type float value. Designate this method as a const method since it does not change an data variables inside the FitByte object.

float FitByte::getWeekCalories() const{


}