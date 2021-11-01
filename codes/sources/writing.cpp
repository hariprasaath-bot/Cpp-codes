#include "header.h"
#include<cstdio>
using namespace user_def;

void::WriteToFile::writingtofilefunc(char name[1024],char data[1024]){

    FILE* file;
    file =  fopen(name,"a");

    fputs(data,file);
    
    fclose(file);
}