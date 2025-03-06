#include <iostream>
#include <vector>
#include <iomanip>//to use setw()
//--------user libraries----------//
#include "interface.h"
#include "variables.h"


void Prompt(){
    int tab_val{0};
    int do_val{0};

    std::cout<<"How many ships do you have ?\n";
    std::cout<<"Number of ships = ";
    std::cin>>n;
    std::cin.ignore();
    TAB.clear();
    DO.clear();
    TAB.resize(n);
    DO.resize(n);
    //enter the TAB and DO values
    std::cout<<"Ok! Enter the ships default parameters - ";

    std::cout<<"TAB - DO\n";
    for (int i = 0; i < n; ++i){
        std::cout<<"N"<<i+1<<" = ";
        std::cin >> tab_val;
        std::cin.ignore(); // Ignorer le '-' et tout autre caractère entre ceux declaré
        std::cin >> do_val;
        TAB[i] = tab_val;
        DO[i] = do_val;
    }

    std::cout<<"\nOk! Let's proceed\n\n";
}


void legende(){
    
    std::cout<<"TBA = Time between arrival\n";
    std::cout<<"AT  = Arrival time\n";
    std::cout<<"DO  = Duration of operations\n";
    std::cout<<"SO  = Start of operations\n";
    std::cout<<"EO  = End Operation\n";
    std::cout<<"TS  = Time in the system\n";
    std::cout<<"TI  = Time innativity\n";
    std::cout<<"Q   = Queues\n\n";
    
   std::cout << "+--------+-------+-------+-------+-------+-------+-------+-------+-------+\n";
   std::cout << "| Ships  |  TAB  |   AT  |   DO  |   SO  |   EO  |   TS  |   TI  |   Q   |\n";
   std::cout << "+--------+-------+-------+-------+-------+-------+-------+-------+-------+\n";

}
//display 2D-vector
void display_Tab2D(int** Tab2D, const int &rows, const int &cols){
    legende();
    int ships_num{1};
    int space{5};

    for (int i{0}; i < rows; ++i){
        std::cout<<"|"<<std::setw(3)<<"N"<<ships_num;
        std::cout<<std::setw(space)<<"|";
        for (int j{0}; j < cols; ++j){
            std::cout<<std::setw(4)<<Tab2D[i][j];
            std::cout<<std::setw(4)<<"|";
        }
        std::cout<<"\n";
   std::cout << "+--------+-------+-------+-------+-------+-------+-------+-------+-------+\n";

        ++ships_num;
        if(ships_num > 9)
            space = 4;
    }

}
