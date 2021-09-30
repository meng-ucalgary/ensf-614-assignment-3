/*
 * File Name:               lab3Clock.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise C
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         October 05, 2021
 */

#ifndef LAB_3_CLOCK
#define LAB_3_CLOCK

class Clock
{
private:
    int hour;
    int minute;
    int second;

    int hms_to_sec();
    void sec_to_hms(int n);

public:
    Clock();
    // Constructs an object of Clock with all values initialized to 0
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      An object of Clock with all values initialized to 0

    Clock(int s);
    // Constructs an object of Clock with time equivalent to the value
    // of s passed in the argument
    //
    // REQUIRES
    //      s >= 0
    //
    // PROMISES
    //      An object of Clock with time equivalent to the value of s

    Clock(int h, int m, int s);
    // Constructs an object of Clock with parameters h, m, s
    //
    // REQUIRES
    //      h >=0 and h <= 23
    //      m >= 0 and m <= 59
    //      s >= 0 and s <= 59
    //
    // PROMISES
    //     an object of Clock with time h, m, and s

    int get_hour() const;
    // Getter for data member hour
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      Returns the hour of the Clock

    int get_minute() const;
    // Getter for data member minute
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      Returns the minute of the Clock

    int get_second() const;
    // Getter for data member second
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      Returns the second of the Clock

    void set_hour(int h);
    // Setter for data member hour
    //
    // REQUIRES
    //      h >= 0 and h <= 23
    //
    // PROMISES
    //     Sets the hour with the value passed in parameter

    void set_minute(int m);
    // Setter for data member minute
    //
    // REQUIRES
    //      m >= 0 and m <= 59
    //
    // PROMISES
    //     Sets the minute with the value passed in parameter

    void set_second(int s);
    // Setter for data member second
    //
    // REQUIRES
    //      s >= 0 and s <= 59
    //
    // PROMISES
    //     Sets the second with the value passed in parameter

    void increment();
    // Increment the time by one second
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      Increases the time represented in the object by one second

    void decrement();
    // Decrement the time by one second
    //
    // REQUIRES
    //      NA
    //
    // PROMISES
    //      Decreases the time represented in the object by one second

    void add_seconds(int s);
    // Add s seconds to the time represented by the object
    //
    // REQUIRES
    //      s >= 0
    //
    // PROMISES
    //      Time represented in increased by s seconds
};

#endif
