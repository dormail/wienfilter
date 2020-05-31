/*** functions.h start ***/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <tuple>
#include <vector>

std::tuple<double, double> step(std::tuple<double, double> r, std::tuple<double, double> v, double dt);


std::tuple<double, double> lorentzforce(std::tuple<double, double> v, double B);

void move(std::tuple<double, double> x0, std::tuple<double, double> v0, double E, double B, double T, double dt, double m, double q);

#endif 
/*** functions.h end ***/
