// Funciones a trabajar

#include <iostream>

// Función Alpha

double * alpha(double x,double v, double t){
    double g = 9.8;
    double j = v-(g*t);
    double * data = new double[2];
    data[0] = j;
    data[1] =-g;
    return data;
}

// Función Runge-kutta

double * rungekutta4(double dt,double t,double X, double V){
    double * k1 = new double [2];
    k1[0] = alpha(X,V,t)[0]*dt;
    k1[1] = alpha(X,V,t)[1]*dt;
    
    double * k2 = new double [2];
    k2[0] = alpha(X+k1[0]/2,V+k1[1]/2,t+dt/2)[0]*dt;
    k2[1] = alpha(X+k1[0]/2,V+k1[1]/2,t+dt/2)[1]*dt;
    
    double * k3 = new double [2];
    k3[0] = alpha(X+k2[0]/2,V+k2[1]/2,t+dt/2)[0]*dt;
    k3[1] = alpha(X+k2[0]/2,V+k2[1]/2,t+dt/2)[1]*dt;
    
    double * k4 = new double [2];
    k3[0] = alpha(X+k3[0],V+k3[1],t+dt)[0]*dt;
    k3[1] = alpha(X+k3[0],V+k3[1],t+dt)[1]*dt;
    
    double * data = new double[3];
    data[0] = t+dt;
    
    data[1] = X+(k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
    data[2] = V+(k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
    
    return data;
}

// Función para el movimiento parabólico

double * mov_parabolico(double y[401],double v[401]){
    double dt = 0.01;
    double newT = 0;
    double * t = new double[401];
    t[0] = newT;
    for(int i=0; i<400; i=i+1){
        double * r = new double[3];
        
        r = rungekutta4(dt,newT,y[i],v[i]);
        newT = r[0];
        if(r[1]<=0){
            break;
        }
           
        y[i+1] = r[1];
        v[i+1] = r[2];
        t[i+1] = newT;
        
        
    }
    double *mp = y;
    
    return mp;
}
