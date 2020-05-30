/*** step.cpp start ***/
#include "functions.h"
#include <tuple>

std::tuple<double, double> step(std::tuple<double, double> r, std::tuple<double, double> v, double dt){
	// getting the coordinates
	double rx = std::get<0>(r);
	double ry = std::get<1>(r);
	// getting the speed 
	double vx = std::get<0>(v);
	double vy = std::get<1>(v);

	// computing the location after the step
	double rxt = rx + dt * vx;
	double ryt = ry + dt * vy;

	// creating a tupel and returning it
	std::tuple<double, double> result (rxt, ryt);
	return result;
}

/*** step.cpp end ***/
