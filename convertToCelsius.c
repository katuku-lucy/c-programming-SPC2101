/*
Name : Katuku Muthami 
Reg : CT100/G/26212/25
*/
#include<stdio.h>
// Function to convert Fahrenheit to Celsius 
float converttoCelsius(float Fahrenheit)
{
return (Fahrenheit - 32) * 5.0/9.0;
}

int main()
{
float fahrenheit ;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",& fahrenheit);
    
    float celsius = converttoCelsius (fahrenheit);
    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
    
    return 0;
}