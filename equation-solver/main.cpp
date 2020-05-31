/*** main.cpp start ***/
#include "functions.h"
#include <tuple>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
	std::tuple<double, double> r0 (0,0);
	std::tuple<double, double> v0 (1,1);
	
	double T = 10;
	double dt = 0.001;
	double B = 1;
	double E = 2;
	double m = 1;
	double q = 1;
	
	move(r0, v0, E, B, T, dt, m, q);

	// outputting variables in a file
	std::ofstream output;
	output.open("variables.csv");

	output << "T,dt,B,E,m,q\n";
	output << T << ',';
	output << dt << ',';
	output << B << ',';
	output << E << ',';
	output << m << ',';
	output << q;

	output.close();

	return 0;
}

/*** main.cpp end ***/
