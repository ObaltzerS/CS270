//#include "FitByte.h"
#include "FitByte.h"

// constructor
FitByte::FitByte(){
    this -> currentDayIndex = 0;
    for(int i=0; i < 7; i++){
        this -> distance[i] = 0;
    }
}
// reset all var
void FitByte::Reset(){
    currentDayIndex = 0;
    for(int i=0; i < 7; i++){
        distance[i] = 0.0f;
    } 
}
// increment day if < 6
bool FitByte::nextDay(){
    if (currentDayIndex < 6){
        currentDayIndex++;
        return true;
    } else {
        currentDayIndex = 0;
        return false;
    }
}
// walk, enter distance at current day
void FitByte::walk(float dis){
    distance[currentDayIndex] += dis;
}
// return the total distance walked in the week
float FitByte::getWeekDistance() const{
    int total = 0;
    for(int i = 0; i < currentDayIndex; i++){
        total = total + distance[i];
    }
    return total;
}
// return the number of days that have passed in week
float FitByte::getNumDays() const{
    return currentDayIndex + 1;
}
// return the distance of the current day
float FitByte::getDayDistance() const{
    return distance[currentDayIndex];
}
