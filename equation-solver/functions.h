/*** functions.h start ***/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <tuple>
#include <vector>

std::tuple<double, double> step(std::tuple<double, double> r, std::tuple<double, double> v, double dt);


std::tuple<double, double> lorentzforce(std::tuple<double, double> v, double B);

void move(std::tuple<double, double> x0, std::tuple<double, double> v0, double E, double B, double T, double dt, double m);

void make_csv(std::vector<double> d1, std::vector<double> d2, std::vector<double> d3, std::vector<double> d4, std::vector<double> d5);

#endif 
/*** functions.h end ***/
