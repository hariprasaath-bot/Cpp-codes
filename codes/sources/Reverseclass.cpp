//class definitions
#include "header.h"
#include<iostream>
using namespace user_def;
using namespace std;

long reverse::revnum(long a){

	reverse::num = a;
	long rev = 0;

	while(num != 0){
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	return rev;
}
		