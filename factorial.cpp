#include "functions.h"
#include<iostream>
using namespace std;

int factorial(int n){

    if(n<0){

        cout<<"Factorial not defined for negative numbers."<<endl;
        cout<<"Please enter a valid positive number"<<endl;

    }else{

        if(n!=1){
            return(n * factorial(n-1));
        }
        else return 1;

    }

}
