/*
 * FitByte
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#ifndef FIT_BYTE_HDR
#define FIT_BYTE_HDR

class FitByte 
{
// public means that the following methods are visible outisde of 
// this FitByte class.
public:
  /*
   * default constructor
   * initializes attributes distance to 0, calories to 0.
   */
  FitByte();

  /*
   * reset
   * post-condition: Resets attributes distance to 0, calories to 0.
   */
  void reset();

  /* 
   * walk
   * pre-condition: receives miles walked as a positive number.
   * post-condition: if miles is > 0, then increase distance by miles and
   * increase calories burned by 100 x miles.
   */
  void walk(float miles);

  /*
   * getCaloriesBurned
   * return number of calories burned.
   */
  float getCaloriesBurned() const;

  /*
   * getMilesWalked
   * return number of miles walked.
   */
  float getMilesWalked() const;

// private means that the following member variables or attributes
// are visible only inside this FitByte class.
private:
  float distance;
  float calories;
};

#endif