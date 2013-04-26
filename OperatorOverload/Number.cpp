#include "Number.h"

/****************************************************************************
 * Number is a class defined the integers' data and operation
 * Data type is INTEGER
 * Operator: +, -, *, /, ==, !=
 ****************************************************************************/

// Calc functions
Number& Number::operator+ (Number& right)
{
    Number *result = new Number();
    result->data = this->data + right.data;
    return *result;
}

Number& Number::operator- (Number& right)
{
    Number *result = new Number();
    result->data = this->data - right.data;
    return *result;
}

Number& Number::operator* (Number& right)
{
    Number *result = new Number();
    result->data = this->data * right.data;
    return *result;
}

Number& Number::operator/ (Number& right)
{
    if (right.data == 0)    // check it is illegel or not
        throw "ERROR : A Number is Divided by ZERO";
    Number *result = new Number();
    result->data = right.data / this->data;
    return *result;
}

// Test if they are equal or not
bool Number::operator== (Number& right)
{
    return (this->data == right.data);
}

bool Number::operator!= (Number& right)
{
    return (this->data != right.data);
}

