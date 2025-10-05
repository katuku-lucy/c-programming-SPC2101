/*
Name: Katuku Muthami 
Reg. : CT100/G/26212/25
Description: A program display mobile data bundles 
*/

#include<stdio.h>
    int choice;
int main(){
    printf("OPTION BUNDLE KSH \n 1     100MB  50\n 2     500MB  200\n 3     1GB    350 \n 4     2GB    600 \n");
    printf("enter your choice (1-4) :\n");
    scanf("%d", &choice);
    
    //use switch statement to display selected option 
    switch (choice){
    case 1 :
    printf("you selected : 100 MB for KES 50 \n");
    break;
    
    case 2 :
    printf("you selected 500MB for KES 200 \n");
    break;
    
    case 3:
    printf("you selected : 1GB for KES 350 \n");
    break;
    
    case 4:
    printf("you selected : 2GB for KES 600 \n");
    break;
    
    default:
    printf("invalid choice, please select another: \n");
    break;
}
    
    return 0;
}