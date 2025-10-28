/*
Name: Lucy Katuku Muthami 
Reg: CT100/G/26212/25
*/
#include<stdio.h>
//Function to calculate electric bill 

float calculateElectricBill(float units){
if (units >0 && units < 101){
float bill = units * 10;
return bill;
}
else if( units>100 && units<201){
 float bill = (100 * 10);
 bill = bill + (( units - 100)* 15);
 return bill;
}
else{
float bill = (100 *10);
bill = (100 * 10) +((200 - 100)* 15) + (( units - 200)*20);
return bill;
 }
 }
 int main(){
 float units;

  printf("Enter the units consumed : ");
  scanf("%f",&units);
  float total = calculateElectricBill(units);
  printf("Total electricity bill = KSh %.2f\n", total);
 return 0;
 }