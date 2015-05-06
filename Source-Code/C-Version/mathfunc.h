//=============================================================================
// MathFunc
//
// @author: Elisha Lai
// @description: Module for providing some mathematical functions.
// @version: 1.2 24/05/2014
//=============================================================================

// Interface for the mathfunc module (mathfunc.h).

#include <stdbool.h>

// max2(a, b) returns the largest of the two passed integers, a and b.
//   PRE: True
//   POST: Returns an Int.
int max2(int a, int b);

// min2(a, b) returns the smallest of the two passed integers, a and b.
//   PRE: True
//   POST: Returns an Int.
int min2(int a, int b);

// maxfactor(a) returns the largest factor of the passed integer, a.
//   PRE: a > 1
//   POST: Returns an Int.
//         0 < Returned value < a
int maxfactor(int a);

// coprime(a, b) returns true if both the passed integers, a and b, have the
// greatest common divisor of 1. Otherwise, false is returned.
//   PRE: a > 0
//        b > 0
//   POST: Returns a Bool.
bool coprime(int a, int b);

// exponent(a, b) returns a raised to the power of b.
//   PRE: a > 0
//        b > 0
//   POST: Returns an Int > 0.
int exponent(int a, int b);
