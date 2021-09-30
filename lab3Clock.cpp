/*
 * File Name:               lab3Clock.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise C
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         October 05, 2021
 */

#include "lab3Clock.h"

Clock::Clock()
{
    set_hour(0);
    set_minute(0);
    set_second(0);
}

Clock::Clock(int s)
{
    if (s < 0)
    {
        set_hour(0);
        set_minute(0);
        set_second(0);
    }

    else
    {
        sec_to_hms(s);
    }
}

Clock::Clock(int h, int m, int s)
{
    if (s >= 0 && s <= 59)
    {
        if (m >= 0 && m <= 59)
        {
            if (h >= 0 && h <= 23)
            {
                set_hour(h);
                set_minute(m);
                set_second(s);

                return;
            }
        }
    }

    set_hour(0);
    set_minute(0);
    set_second(0);
}

void Clock::sec_to_hms(int n)
{
    int h = (n / 3600);
    int m = (n / 60) - (h * 60);
    int s = n - (m * 60) - (h * 3600);

    h = h % 24;

    set_hour(h);
    set_minute(m);
    set_second(s);
}

int Clock::hms_to_sec()
{
    return (get_hour() * 3600) + (get_minute() * 60) + get_second();
}

int Clock::get_hour() const
{
    return hour;
}

int Clock::get_minute() const
{
    return minute;
}

int Clock::get_second() const
{
    return second;
}

void Clock::set_hour(int h)
{
    if (h >= 0 && h <= 23)
    {
        hour = h;
    }
}

void Clock::set_minute(int m)
{
    if (m >= 0 && m <= 59)
    {
        minute = m;
    }
}

void Clock::set_second(int s)
{
    if (s >= 0 && s <= 59)
    {
        second = s;
    }
}

void Clock::increment()
{
    if (second < 59)
    {
        second++;
    }

    else
    {
        second = 0;

        if (minute < 59)
        {
            minute++;
        }

        else
        {
            minute = 0;

            if (hour < 23)
            {
                hour++;
            }

            else
            {
                hour = 0;
            }
        }
    }
}

void Clock::decrement()
{
    if (second > 0)
    {
        second--;
    }

    else
    {
        second = 59;

        if (minute > 0)
        {
            minute--;
        }

        else
        {
            minute = 59;

            if (hour > 0)
            {
                hour--;
            }

            else
            {
                hour = 23;
            }
        }
    }
}

void Clock::add_seconds(int s)
{
    for (int i = 0; i < s; i++)
    {
        increment();
    }
}
