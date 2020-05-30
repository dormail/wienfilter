/*** lorentzforce.cpp start 
 * computes direction and magnitude of the lorentz force based on the
 * velocity
 * ***/
#include "functions.h"
#include <tuple>

std::tuple<double, double> lorentzforce(std::tuple<double, double> v, B){
	std::tuple<double, double> F(0,0);
	std::get<0>(F) = -1 * std::get<1>(v);
	std::get<1>(F) = std::get<0>(v);
	return F;
}

/*** lorentzforce.cpp end ***/
