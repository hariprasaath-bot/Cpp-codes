#include "header.h"
#include <cstdio>
using namespace user_def;

int main(){
    printf("new registeration type 1 else type 0: ");
    int flag;

    scanf("%d",&flag);        //prompt for new user

    UserReg obj;
    //printf("%d",flag)
    if(flag == 1){

        obj.NewRegistration();
        obj.login();

    }
    else{

        obj.login();    
    }

    return 0;

}