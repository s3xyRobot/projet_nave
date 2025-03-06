//calculations and table fill
#include <iostream>
#include <vector>
//--------user libraries----------//
#include "global_variables.h"
#include "calculations.h"

void calcul(){

// initialize 
    SO[0] = AT[0]; 
    EO[0] = SO[0] + DO[0];
    TI[0] = SO[0];

//AT
	for (int i{1}; i < n ; ++i){
	  	AT[i] =  AT[i-1] + TAB[i];
	}

//SO & EO
	for (int i{1}; i < n; ++i){
		if (AT[i] >= EO[i-1]){
			SO[i] = AT[i];
		}
		else if (AT[i] < EO[i-1]){
			SO[i] = EO[i-1];
		}
	  EO[i] = SO[i] + DO[i];
	}

//TS
	for (int i = 0; i < n; ++i){
		TS[i] = EO[i] - AT[i];
	}

//TI
	for (int i{1}; i < n; ++i){
		TI[i] = SO[i] - EO[i-1];
	}

	for(int i{0}; i < n; ++i){
		Q[i] = SO[i] - AT[i]; 
	}

//Sum
	for (auto num:Q){
		Q_sum += num;
	}
	for (auto num:TS){
		TS_sum += num;
	}
	for (auto num:TI){
		TI_sum += num;
	}

//KPIs
	//Average time spent in the system by each vessel
	ATS = static_cast<double> (TS_sum)/(n);

	//Inactivity port area operators
	IPP = static_cast<double> ((TI_sum)/(EO[n-1])*100);

	//Average waiting time of each vessel
	TMA = static_cast<double> (Q_sum)/(n);
}
