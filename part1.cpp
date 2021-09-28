/*
 * File Name:               part1.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise D
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <iostream>
using namespace std;

#include "DynString.h"

void doSomething(DynString &s1, const DynString &s2);

int main()
{
    DynString a("abcd");
    DynString *b;

    // NOTE: The fact that the following code is within an extra pair of
    // braces. Means that scope of the varibles declared between barces ends
    // when  once program reaches the closing barce.
    {
        b = new DynString("film");
        cout << "BEFORE: " << b->c_str() << endl;
        doSomething(*b, *b);
        cout << "AFTER:  " << b->c_str() << endl;

        // The following line is trying to make object c a copy of object a.
        // Notice: this is a bad-copy and can cause serious issues
        DynString c = a;
        // point 3
    }

    delete b;
    // point 4

    cout << "If you press return your program may give an error." << endl;
    cout << "In your lab report discuss what is wrong with this program.";
    cin.get(); // waiting for user to press return.

    return 0;
}

void doSomething(DynString &s1, const DynString &s2)
{
    char ch = s2.get_element(2);
    ch++;
    ch = ch - 32;
    s1.set_element(0, ch);
}
