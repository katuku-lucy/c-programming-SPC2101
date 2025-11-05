/*
Name: Katuku Muthami 
Reg: CT100/G/26212/25
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int k,l,m, branchOccupied, totalOccupied = 0;

    srand(time(0)); 

    printf("=Room Occupancy Across Multiple Branches \n");

    for (k = 0; k < 3; k++) { 
    branchOccupied = 0;
    for (l = 0; l < 5; l++) { 
    for (m = 0; m < 10; m++) { 
    chain[k][l][m] = rand() % 2; 
    if (chain[k][l][m] == 1)
    branchOccupied++;
    }
    }
    printf("Branch %d -> Occupied Rooms: %d\n", k + 1, branchOccupied);
    totalOccupied += branchOccupied;
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}