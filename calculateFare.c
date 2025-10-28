/*
Name: Lucy Katuku Muthami 
Reg : CT100/G/26212/25
*/

#include<stdio.h>
// Function to calculate fare used
float calculatefare(float distance){
return distance * 50;
}

int main()
{
float distance ;
    printf("enter the distance traveled in km : ");
    scanf("%f", & distance);
    float fare = calculatefare (distance);
    printf("total fare  KSh %.2f\n", fare);
    return 0;
}