#include "functions.h"
#include<iostream>
using namespace std;

//Group 5 Activity 2 Q10
//Lap

int factorial(int n){

    if(n<0){
        return -1;
    }else{

        if(n!=1){
            return(n * factorial(n-1));
        }
        else return 1;

    }


        

}
