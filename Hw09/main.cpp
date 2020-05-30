#include <iostream>
#include "funciones.h"
using namespace std;


int main(){

    double *Y = new double [401];
    double *V = new double [401];
    Y[0]=8.5;
    V[0]=20;
    
    double * y = mov_parabolico(Y,V);
    
    for(int i=0; i<401; i++){
        
        cout << y[i] << endl;
    }
    return 0;
}