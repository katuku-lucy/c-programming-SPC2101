/*
Name: Katuku Muthami 
Reg: CT100/G/26212/25
Description: program to check exam eligibility 
*/

#include<stdio.h> 

int main(){
     float attendance, average_marks;
     
     //attendance in percentage 
     printf("enter the attendance percentage: ");
     scanf("%f",&attendance);
     
     //average marks
     printf("enter average marks: ");
     scanf("%f",&average_marks);
      
     //students' eligibility 
     if(attendance >= 75 && average_marks >= 40){
     printf("you're eligible to do exam.\n");
     }  
     else{
       
    printf("Not eligible to do exam.\n");
    }
    
    return 0;
}