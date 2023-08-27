#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int x=56,y=98;
    cout<<"The GCD of x and y is: "<<gcd_non_rec(x,y)<< endl;
    cout<<"The recursive GCD of x and y is: "<<gcd_rec(x,y)<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    return 0;
}
