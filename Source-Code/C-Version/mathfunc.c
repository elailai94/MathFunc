//=============================================================================
// MathFunc
//
// @author: Elisha Lai
// @description: Module for providing some mathematical functions.
// @version: 1.2 22/05/2014
//=============================================================================

// Mathfunc module (mathfunc.c).

#include <assert.h>
#include <stdbool.h>
#include "mathfunc.h"

// See interface (header file).
int max2(int a, int b) {
   return (a >= b)? a: b;
}

// See interface (header file).
int min2(int a, int b) {
   return (a <= b)? a: b;
}

// maxfactor_checker(m, n) returns the largest factor of the passed integer, m.
//   PRE: m > 1
//        n > 0
//   POST: Returns an Int.
//         0 < Returned value < m
static int maxfactor_checker(int m, int n) {
   // Checks pre conditions.
   assert(m > 1);
   assert(n > 0);
   return ((m % n) == 0)? n:
          maxfactor_checker(m, n-1);
}

// See interface (header file).
int maxfactor(int a) {
   // Checks pre conditions.
   assert(a > 1);
   // Maximum factor limit.
   const int half_of_a = (a / 2);
   return ((a % 2) == 0)? half_of_a:
          maxfactor_checker(a, half_of_a);
}

// gcd(m, n) returns the greatest common divisor of the two passed integers,
// m and n.
//   PRE: True
//   POST: Returns an Int >= 0.
static int gcd(int m, int n) {
   return (m == 0)? n:
          (n == 0)? m:
          gcd(n, m % n);
}

// See interface (header file).
bool coprime(int a, int b) {
   // Checks pre conditions.
   assert(a > 0);
   assert(b > 0);
   return (gcd(a,b) == 1);
}

// See interface (header file).
int exponent(int a, int b){
   assert(a > 0);
   assert(b > 0);
   return (b == 1)? a:
          a * exponent(a, b-1);
}
