#include "functions.h"
#include<iostream>
using namespace std;

int gcd_non_rec(int a, int b)
{
    int res = min(a, b);
    while (res > 0) {
        if (a % res == 0 && b % res == 0) {
            break;
        }
        res--;
    }
    return res;
}