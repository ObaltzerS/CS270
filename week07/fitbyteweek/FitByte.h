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
    
    void Reset();
    
    // true if 
    bool nextDay();
    
    void walk(float dis);

    float getWeekDistance() const;

    float getNumDays() const;

    float getDayDistance() const;



private:

    int distance[7];
    int currentDayIndex;
    int currentWeekIndex;
    int caloriesBurned;
    
};

#endif
