//create 2D table
#include <iostream>
#include <vector>
#include "global_variables.h"
#include "calculations.h"

int** create_Tab2D(int &rows, int &cols){
    
    int**Tab_2D = new int*[rows];
    for (int i{0}; i < rows; ++i){
        Tab_2D[i] = new int[cols];
    }

    int a{0},b{0},c{0},d{0},e{0},f{0},g{0},h{0};

    for (int i{0}; i < rows; ++i){
     for (int j{0}; j < cols; ++j){
        
        if (j == 0){
            Tab_2D[i][j] = TAB[0];
            ++a;
        }
        else if (j == 1){
            Tab_2D[i][j] = AT[0];
            ++b;
        }
        else if (j == 2){
            Tab_2D[i][j] = DO[0];
            ++c;
        }
        else if (j == 3){
            Tab_2D[i][j] = SO[0];
            ++d;
        }
        else if (j == 4){
            Tab_2D[i][j] = EO[e];
            ++e;
        }
        else if (j == 5){
            Tab_2D[i][j] = TS[f];
            ++f;
        }
        else if (j == 6){
            Tab_2D[i][j] = TI[g];
            ++g;
        }        
        else if (j == 7){
            Tab_2D[i][j] = Q[h];
            ++h;
        }        
      }
    }
    return Tab_2D;
}
