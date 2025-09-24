/*
Name: Katuku Muthami 
Reg: CT100/G/26212/25
Description:Customer loan qualifications 
*/
#include<stdio.h>

int main(){
    int age ;
    float income ;
    //prompt for age
    printf("enter your age:");
    scanf("%d", &age);
    
    //prompt for annual income 
    printf("enter your annual income:");
    scanf("%f", &income);
    
    //check if the customer qualifies for the loan 
    if(age>= 21 && income >=21000){
    printf("congratulations you qualify for a loan. \n");
    }
    else{
    printf("unfortunately,we are unable to offer you a loan at this time. n");
    }
    return 0;
}