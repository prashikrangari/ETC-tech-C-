#include<stdio.h>
#include<string.h>
int main(){
    char name[100]="Prashik";//string type of variable
    if (strcmp(name,"Prashik")==0){
        printf("yes my name is correct");
    }else{
        printf("Not correct");
    }
}