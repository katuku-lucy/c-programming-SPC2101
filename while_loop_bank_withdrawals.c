/*
Name: Katuku Muthami 
Reg: CT100/G/26212/25
Description: c program to show bank withdrawals 
while loop
*/

#include<stdio.h>

int main()
{
int amount ;
 int balance = 1000; //start
 printf("your current balance is %d \n",balance);

 while (balance>0) //stop
 {
  printf("enter amount to withdraw: \n");
  scanf("%d", &amount);
  balance -=amount; // step, balance = balance - amount
  printf("New balance: %d =\n",balance);
 }
 printf("insufficient balance");
 
    return 0;
}