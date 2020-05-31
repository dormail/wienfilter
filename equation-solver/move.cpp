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

void move(std::tuple<double, double> x0, std::tuple<double, double> v0, double E, double B, double T, double dt, double m){
	unsigned int run = T / dt; // amount of iterations

	std::cout << run << '\n';

	// using lists for each datapoint
	std::vector<double> vx(run);
	std::vector<double> vy(run);
	std::vector<double> x(run);
	std::vector<double> y(run);
	std::vector<double> t(run);

	// space holder for current data
	std::tuple<double, double> xt(0,0);
	std::tuple<double, double> vt(0,0);

	// the start values are the ones given
	std::get<0>(xt) = std::get<0>(x0);
	std::get<1>(xt) = std::get<1>(x0);
	std::get<0>(vt) = std::get<0>(v0);
	std::get<1>(vt) = std::get<1>(v0);

	double time = 0;

	// another tuple for the force
	std::tuple<double, double> F(0,0);

	// the main simulation part
	for(unsigned int i = 1; i < run - 1; i++){
		std::cout << i << '\n';
		time += dt; // the counter for the time

		F = lorentzforce(vt, B);
		std::get<0>(F) = std::get<0>(F) / m;
		std::get<1>(F) = std::get<1>(F) / m;

		xt = step(xt, vt, dt);
		vt = step(vt, F, dt);

		// saving the new data to lists
		x.at(i) = std::get<0>(xt);
		y.at(i) = std::get<1>(xt);
		//vx[i] = std::get<0>(vt);
		//vy[i] = std::get<1>(vt);
		//t[i] = time;
	}

	vx.~vector();
	vy.~vector();
	x.~vector();
	y.~vector();
	t.~vector();
}


/*** move.cpp end ***/
