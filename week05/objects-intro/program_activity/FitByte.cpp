/*
 * FitByte
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#include "FitByte.h"
// to make sure that the compiler knows these are methods, we must prefix all with the classname and ::
/*
 * default constructor
 * initializes attributes distance to 0, calories to 0.
 */
FitByte::FitByte(){
    distance = 0.0f;
    calories = 0.0f;
}
/*
 * reset
 * post-condition: Resets attributes distance to 0, calories to 0.
 */
void FitByte::reset(){
    this -> distance = 0.0f;
    this -> calories = 0.0f;
}

/* 
 * walk
 * pre-condition: receives miles walked as a positive type float number.
 * post-condition: if miles is > 0, then increase distance by miles and
 * increase calories burned by 100 x miles. Nothing is returned.
 */
void FitByte::walk(float miles){
    if (miles > 0){
        this -> distance += miles;
        this -> calories = miles * 100;
    }
}

/*
 * getCaloriesBurned
 * pre-condition: receives nothing.
 * return number of calories burned as a type float number.
 */
float FitByte::getCaloriesBurned() const{
    return this -> calories;
}

/*
 * getMilesWalked
 * pre-condition: receives nothing.
 * return number of total miles walked as a type float number.
 */
float FitByte::getMilesWalked() const{
    return this -> distance;
}

int main(){
    return 0;
}
