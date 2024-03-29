#include <iostream>
#include "FitByte.h"

using namespace std;

int main(){
    cout << "New and improved FitByte, now with weekly distance counting" << endl;
    
    FitByte Fit;
    Fit.walk(20);
    Fit.walk(5);
    Fit.nextDay();
    Fit.walk(6);
    Fit.nextDay();
    Fit.walk(7);
    Fit.nextDay();
    Fit.walk(0);
    Fit.nextDay();
    Fit.walk(4);
    Fit.nextDay();
    Fit.walk(9);
    Fit.nextDay();
    Fit.walk(4);
    
    // week two
    
    Fit.nextDay();
    Fit.walk(7);
    Fit.nextDay();
    Fit.walk(0);
    Fit.nextDay();
    Fit.walk(4);

    
    cout << "total walked this week " << Fit.getWeekDistance() << endl;
    cout << "total calories burned this week " << Fit.getWeekCalories() << endl;
    cout << "calories on day 1 " << Fit.getCaloriesByDay(1) << endl;
    cout << "distance on day 1 " << Fit.getDistanceByDay(1) << endl;

    
    return 0;
}