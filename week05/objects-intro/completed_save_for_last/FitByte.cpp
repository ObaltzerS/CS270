/*
 * FitByte
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#include "FitByte.h"

/*
 * default constructor
 * initializes attributes distance to 0, calories to 0.
 */
FitByte::FitByte()
{
  this->distance = 0.0f;
  this->calories = 0.0f;
}

/*
 * reset
 * post-condition: Resets attributes distance to 0, calories to 0.
 */
void FitByte::reset()
{
  this->distance = 0.0f;
  this->calories = 0.0f;  
}

/* 
 * walk
 * pre-condition: receives miles walked as a positive number.
 * post-condition: if miles is > 0, then increase distance by miles and
 * increase calories burned by 100 x miles.
 */
void FitByte::walk(float miles)
{
  if(miles > 0)
  {
    this->distance = this->distance + miles;
    this->calories = this->calories + 100.0f * miles;
  }  
}

/*
 * getCaloriesBurned
 * return number of calories burned.
 */
float FitByte::getCaloriesBurned() const
{
  return this->calories;
}

/*
 * getMilesWalked
 * return number of miles walked.
 */
float FitByte::getMilesWalked() const
{
  return this->distance;
}