/*** step.cpp start 
 * this function follows the equation
 * result = r + v * dt + 0.5 a * t^2;
 * ***/
#include "functions.h"
#include <tuple>

std::tuple<double, double> step(std::tuple<double, double> r, std::tuple<double, double> v, std::tuple<double, double> a, double dt){
	// getting the coordinates
	double rx = std::get<0>(r);
	double ry = std::get<1>(r);
	// getting the speed 
	double vx = std::get<0>(v);
	double vy = std::get<1>(v);
	// getting the acceleration
	double ax = std::get<0>(a);
	double ay = std::get<1>(a);

	// computing the location after the step
	double rxt = rx + dt * vx + 0.5 * ax * dt * dt;
	double ryt = ry + dt * vy + 0.5 * ay * dt * dt;

	// creating a tupel and returning it
	std::tuple<double, double> result (rxt, ryt);
	return result;
}

/*** step.cpp end ***/
