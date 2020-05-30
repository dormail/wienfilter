# makefile for the wienfilter compuation program

main:  equation-solver/main.cpp equation-solver/functions.h equation-solver/step.cpp
	g++ equation-solver/main.cpp equation-solver/functions.h equation-solver/step.cpp -o a.out
