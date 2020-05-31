/*** make_csv.cpp start ***/
#include "functions.h"
#include <fstream>
#include <vector>
#include <string>

void make_csv(std::vector<double> d1, std::vector<double> d2, std::vector<double> d3, std::vector<double> d4, std::vector<double> d5){
	std::string filename = "wienfilter.csv";

	std::ofstream output;
	output.open(filename);

	unsigned int size = d1.size();

	for(unsigned int i = 0; i < size; i++){
		output << d1[i];
		output << 'n';
		output << d2[i];
		output << 'n';
		output << d3[i];
		output << 'n';
		output << d4[i];
		output << 'n';
		output << d5[i];
		output << '\n';
	}
	output.close();
}
	


/*** make_csv.cpp end ***/
