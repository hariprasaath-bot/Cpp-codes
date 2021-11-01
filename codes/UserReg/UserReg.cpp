#include "header.h"
#include<cstdio>
#include<ctime>
#include<cstring>

using namespace user_def;

void::UserReg::NewRegistration(){

    time_t curtime = time(&curtime);

    printf("Entered New Registration\nEnter username: ");
    scanf("%s",u_name);   //username input

    printf("Enter password: ");
    scanf("%s",u_pass);       //password input

    FILE* fp;
    fp = fopen(u_name,"a");

    fprintf(fp,"%sUsername: %s\nPassword: %s",ctime(&curtime),u_name,u_pass);

    fclose(fp);

}

void::UserReg::login(){
    char str[1024];

    printf(" Entered login\nEnter username: ");
    scanf("%s",u_name);   //username input

    printf("Enter password: ");
    scanf("%s",u_pass);          //password input

    char pass[buff] = "Password: ";
    strcat(pass,u_pass);

    FILE* rp;
    rp = fopen(u_name, "r");

    if(rp == NULL){
          perror("User does not exist or moved\n");
          return ;
    }

    
    while(fgets(str,buff,rp)){
        
     
        if(!strcmp(str,pass)){
             printf("Succesfully LOGGED IN\n");

        }
    }
   printf("\n");
    fclose (rp); 

}