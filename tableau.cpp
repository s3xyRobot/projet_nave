#include <iostream>
#include <vector>
#include <iomanip>
//--------user libraries----------//
#include "variables.h"
#include "interface.h"
#include "create.h"
#include "calcul.h"


int main() {

    Prompt();
    int rows{n};
    int cols{8};

//calcul
    calcul();
//Creation of the 2D Tab

    int** Init_Tab = create_Tab2D(rows,cols);

//display
    display_Tab2D(Init_Tab,rows,cols);
    std::cout << std::fixed << std::setprecision(1);
        std::cout<<"\nATS : "<<ATS<<"\n";
        std::cout<<"IPP : "<<IPP<<"%\n";
        std::cout<<"TMA : "<<TMA<<"\n";
    delete[] Init_Tab;
    return 0;
}