/*** functions.h start ***/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <tuple>

std::tuple<double, double> step(std::tuple<double, double> r, std::tuple<double, double> v, double dt);


std::tuple<double, double> lorentzforce(std::tuple<double, double> v, double B);

#endif 
/*** functions.h end ***/
