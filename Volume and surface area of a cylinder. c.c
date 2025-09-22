/*
Name:Lucy Katuku Muthami 
Reg: CT100/G/26212/25
Description: volume and surface area of a cylinder 
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt the radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume 
    volume = PI * radius * radius * height;
    
    // Calculate the surface area 
    surfaceArea = 2 * PI * radius * (radius + height);

    // Output results 
    printf(" Cylinder Properties\n");
    printf("Volume of the cylinder is: %.2lf\n", volume);
    printf("Surface Area of the cylinder is:%.2lf\n", surfaceArea);

    return 0;
}
