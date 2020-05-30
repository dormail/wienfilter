/*** main.cpp start ***/
#include "functions.h"
#include <tuple>
#include <iostream>

int main(int argc, char* argv[]){
	std::tuple<double, double> r (2,3);
	std::tuple<double, double> v (1,-5);
	
	double t = 1;

	std::tuple<double, double> r2 = step(r,v,t);

	double r2_1 = std::get<0>(r2);
	double r2_2 = std::get<1>(r2);
	
	std::cout << r2_1 << '\n' << r2_2 << '\n';

	return 0;
}

/*** main.cpp end ***/
