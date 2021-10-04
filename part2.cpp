/*
 * File Name:               part2.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise D
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <iostream>
using namespace std;

#include "DynString.h"

int main()
{
    DynString x("foot");
    DynString y;
    DynString z("ball");

    x.truncate(3);
    cout << "Contents of x: \"" << x.c_str() << "\" (expected \"foo\")." << endl;
    cout << "Length of x: " << x.length() << " (expected 3).\n"
         << endl;

    x.truncate(0);
    cout << "Contents of x: \"" << x.c_str() << "\" (expected \"\")." << endl;
    cout << "Length of x: " << x.length() << " (expected 0).\n"
         << endl;
#if 1
    x.append("foot");
    cout << "Contents of x: \"" << x.c_str() << "\" (expected \"foot\")." << endl;
    cout << "Length of x: " << x.length() << " (expected 4).\n" << endl;
    x.append(y);
    cout << "Contents of x: \"" << x.c_str() << "\" (expected \"foot\")." << endl;
    cout << "Length of x: " << x.length() << " (expected 4).\n" << endl;
    x.append(z);
    cout << "Contents of x: \"" << x.c_str() << "\" (expected \"football\")." << endl;
    cout << "Length of x: " << x.length() << " (expected 8).\n" << endl;;
#endif

    return 0;
}
