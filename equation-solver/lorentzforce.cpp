/*** lorentzforce.cpp start 
 * computes direction and magnitude of the lorentz force based on the
 * velocity
 * ***/
#include "functions.h"
#include <tuple>

std::tuple<double, double> lorentzforce(std::tuple<double, double> v, double B){
	std::tuple<double, double> F(B * std::get<1>(v), -1 * B * std::get<0>(v));
	return F;
}

/*** lorentzforce.cpp end ***/
