#include "header.h"
#include<cstdio>
using namespace user_def;

long::Factorial::FindFactorial(long n){
    long fact = 1;
    
    for(int i = 2 ; i <= n ; ++i){

        fact = fact * i;
    }
    

    return fact;
}