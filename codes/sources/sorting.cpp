#include "header.h"

using namespace user_def;

long* sort::ascend(long* a, int n){

    int j;
    long cmp;
    for(int i = 1 ; i < n ; ++i  ){

        cmp = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > cmp){
            a[j+1] = a[j];
            j = j - 1;            
        } 
        a[j+1] = cmp;       
    }

    return a;
}
long* sort::descend(long* a, int n){

    int j;
    long cmp;
    for(int i = 1 ; i < n ; ++i  ){

        cmp = a[i];
        j = i - 1;

        while(j >= 0 && a[j] < cmp){
            a[j+1] = a[j];
            j = j - 1;            
        } 
        a[j+1] = cmp;       
    }

    return a;
}