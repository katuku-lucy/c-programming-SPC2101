/*
Name : Katuku Muthami 
Reg : CT100/G/26212/25
Description: water bill calculator program 
*/
#include<stdio.h>

int main(){
     int units;
     float bill = 0;
    // prompt number of units consumed 
    printf("enter the number of units used: ");
    scanf("%d",&units);
    
    if(units >=0 && units <=30){
    bill = units * 20;
    }
    else if(units >= 31 && units <= 60){
    bill = units * 25;
    }
   else if(units > 60){
   bill = units*30;
   }
   
   
   printf("total water bill:%2f KES \n",bill);
    return 0;
}