/*
 * File Name:               DynString.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise D
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <assert.h>
#include <string.h>
#include "DynString.h"

DynString::DynString()
    : lengthM(0), storageM(new char[1])
{
    storageM[0] = '\0';
}

DynString::DynString(const char *s)
    : lengthM((int)strlen(s))
{
    storageM = new char[lengthM + 1];
    strcpy(storageM, s);
    // Point 1
}

DynString::~DynString()
{
    delete[] storageM;
    // Point 2
}

int DynString::length() const
{
    return lengthM;
}

char DynString::get_element(int pos) const
{
    assert(pos >= 0 && pos < length());
    return storageM[pos];
    ;
}

void DynString::set_element(int pos, char value)
{
    assert(pos >= 0 && pos < length());
    storageM[pos] = value;
}

const char *DynString::c_str() const
{
    return storageM;
}

void DynString::truncate(int new_length)
{
    assert(new_length <= length());
    char *smaller_storage = new char[new_length + 1];
    assert(smaller_storage != NULL);

    for (int i = 0; i < new_length; i++)
        smaller_storage[i] = storageM[i];

    smaller_storage[new_length] = '\0';
    delete[] storageM;
    storageM = smaller_storage;
    lengthM = new_length;
}

void DynString::append(const DynString &tail)
{
    // allocate a new array of the right length
    char *temp = new char[lengthM + tail.lengthM + 1];

    // copy whatever characters need to be copied into the new array
    for(int i=0; i<lengthM; i++)
    {
        temp[i] = storageM[i];
    }

    for(int i=0; i<tail.lengthM; i++)
    {
        temp[i + lengthM] = tail.storageM[i];
    }

    temp[lengthM + tail.lengthM] = '\0';

    // deallocate the old array
    delete[] storageM;
    storageM = temp;

    // adjust the value of the lengthM variable
    lengthM = lengthM + tail.lengthM;
}
