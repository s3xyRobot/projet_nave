// global_variables.h
#ifndef VARIABLES_H
#define VARIABLES_H
#include <iostream>
	/*
		extern - to be able to use the variables everywhere the preprocessor would be found
	*/
   extern int n;
   extern double Q_sum;
   extern double TS_sum;
   extern double TI_sum;
   extern double ATS;
   extern double IPP;
   extern double TMA;
   extern std::vector<int> TAB;
   extern std::vector<int> AT;    
   extern std::vector<int> DO;
   extern std::vector<int> SO;    
   extern std::vector<int> EO;
   extern std::vector<int> TS;    
   extern std::vector<int> TI;
   extern std::vector<int> Q;

#endif
