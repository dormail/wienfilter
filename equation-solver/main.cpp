/*** main.cpp start ***/
#include "functions.h"
#include <tuple>
#include <iostream>

int main(int argc, char* argv[]){
	std::tuple<double, double> r0 (0,0);
	std::tuple<double, double> v0 (1,1);
	
	double T = 5;
	double dt = 0.01;
	double B = 1;
	double E = 0;
	double m = 1;
	
	move(r0, v0, E, B, T, dt, m);

	return 0;
}

/*** main.cpp end ***/
