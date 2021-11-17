#pragma once
#include <math.h>
#DEFINE DBL_EPSILON pow(10,-8)
double derivative(double(*f)(double x), double(*f)(double h) ){
  
return(f(x + h) - f(x - h)) / 2 * h;

}
