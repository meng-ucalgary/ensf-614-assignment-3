/*
 * File Name:               cplx_number.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 3 Exercise B
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include "cplx_number.h"

Cplx::Cplx(double real, double imag) : realM(real), imagM(imag)
{
    // point three - When the program reaches this point for the second time
}

double Cplx::getRealPart() const
{
    // point two - When the program reaches this point for the first time
    return realM;
}

double Cplx::getImaginaryPart() const
{
    return imagM;
}

void Cplx::setRealPart(double arg)
{

    realM = arg;
    // Point one
}

void Cplx::setImaginaryPart(double arg)
{
    imagM = arg;
}

Cplx Cplx::add(const Cplx &other) const
{
    Cplx local;

    local.realM = this->getRealPart() + other.realM;
    local.imagM = imagM + other.imagM;

    return local;
}

Cplx Cplx::subtract(const Cplx *other) const
{
    Cplx local;
    local.realM = realM - other->realM;
    local.imagM = imagM - other->imagM;

    // point four

    return local;
}
