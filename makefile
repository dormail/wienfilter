# makefile for the wienfilter compuation program

main:  equation-solver/main.cpp equation-solver/functions.h equation-solver/step.cpp equation-solver/lorentzforce.cpp equation-solver/move.cpp
	g++ equation-solver/main.cpp equation-solver/functions.h equation-solver/step.cpp equation-solver/lorentzforce.cpp equation-solver/move.cpp -o a.out
