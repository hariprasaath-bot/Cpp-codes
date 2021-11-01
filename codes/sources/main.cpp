#include<cstdio>
#include "header.h"
using namespace user_def;

int main(){
	
	//Below are codes for testing the sources please uncomment to test

	/******************************************************
	long n;
	
	printf("enter the no. ");
	scanf("%ld",&n);
	
	reverse obj;
	
	printf("%ld is reversed no.: %ld",n,obj.revnum(n));
	
	*//////////////////////////////////////////////////////
	

	//Below is sorting test code please uncomment this

	/*****************************************************
	sort objt;
	
	printf("Enter size of array ");
	int p;
	scanf("%d",&p);
	
	long arr[p];
	for(size_t j = 0 ; j < p ; ++j){
		scanf("%d",&arr[j]);
	}
	
	long* p1;
	p1 = objt.descend(arr, p);	//Descending sorting the array

	for(size_t j = 0 ; j < p ; ++j){
			printf("%d  ",p1[j]);
	}
	
	long* p2;
	p2 = objt.ascend(p1, n);	//Ascending sorting the array

	for(size_t j = 0 ; j < p ; ++j){
			printf("%d  ",p2[j]);
	}
	*/////////////////////////////////////////////////////

	/*****************************************************

	WriteToFile objt1;
	//printf("Enter the name of file: ");
	//char name[1024];
	//scanf("%[^\n]s",&name);

	printf("Enter the data to file: ");
	char data[1024];
	int i = 0 ;

	while(1){
		scanf("%c",&data[i]);
		if(data[i] == '\n') break;
		else ++i;
	}

	objt1.writingtofilefunc("txtfile",data);

	*/////////////////////////////////////////////////////

	/****************************************************
	Factorial objt2;
	long n;
	printf("enter no to find factorial: ");
	scanf("%ld",&n);
	long a = objt2.FindFactorial(n);

	printf("factorial of %ld is : %ld",n,a);

	*////////////////////////////////////////////////////

	return 0;
}
	