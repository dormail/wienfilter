/*** move.cpp start 
 * the function move simulates the motion in the wien filter.
 * It uses the step function for each iteration.
 * It simulates T seconds, with dt for each iteration. Thus
 * dt -> 0 gives higher precision.
 * ***/
#include <tuple>
#include "functions.h"
#include <vector>
#include <iostream>
#include <fstream>

void move(std::tuple<double, double> x0, std::tuple<double, double> v0, double E, double B, double T, double dt, double m, double q){
	unsigned int run = T / dt; // amount of iterations

	//std::cout << run << '\n';
	
	// The coloumb force (which is constant in the wien filter)
	double FCO = E * q;

	// space holder for current data
	std::tuple<double, double> xt(0,0);
	std::tuple<double, double> vt(0,0);

	// the start values are the ones given
	std::get<0>(xt) = std::get<0>(x0);
	std::get<1>(xt) = std::get<1>(x0);
	std::get<0>(vt) = std::get<0>(v0);
	std::get<1>(vt) = std::get<1>(v0);

	double time = 0;

	// a tuple with zeros
	std::tuple<double, double> zeros(0,0);

	// another tuple for the force
	std::tuple<double, double> F(0,0);

	// for the cs export
	std::ofstream output;
	output.open("wienfilter.csv");

	output << "t,x,y,vx,vy\n";
	
	// the main simulation part
	for(unsigned int i = 1; i < run; i++){
		//std::cout << i << '\n';
		time += dt; // the counter for the time

		F = lorentzforce(vt, B);
		std::get<0>(F) = std::get<0>(F) / m;
		// y-Force is lorentzforce + coloumbforce
		std::get<1>(F) = (FCO + std::get<1>(F)) / m;

		xt = step(xt, vt, F, dt);
		vt = step(vt, F, zeros, dt);

		// saving new data in file
		output << time << ",";
		output << std::get<0>(xt) << ",";
		output << std::get<1>(xt) << ",";
		output << std::get<0>(vt) << ",";
		output << std::get<1>(vt);
		output << '\n';
	}
	output.close();
}


/*** move.cpp end ***/
