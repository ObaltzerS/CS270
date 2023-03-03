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

    FitByte();

    // reset - Receives no arguments.
    // Resets the current day to 0 and resets the distance and calories
    // for each day to 0.
    void reset();

    void walk(float miles);

    bool nextDay();

    int getDaysWalked() const;

    float getDistanceByDay(int day) const;

    float getCaloriesByDay(int day) const;

    float getWeekDistance() const;

    float getWeekCalories() const;

private:

    


};

#endif
