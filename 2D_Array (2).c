/*
Name: Paul Sinyati Lekasuiyan
Reg No: PA106/G/28929/25
Program: 2D Array (Room Occupancy)
*/

#include <stdio.h>

int main() {
    int i, j;
    int occupancy[3][4] = {
    
    {1, 0, 1, 1},
    {0, 1, 1, 0},
    {1, 1, 0, 0}
    };

    printf("=== Room Occupancy (1 = Occupied, 0 = Vacant) ===\n\n");

    for (i = 0; i < 3; i++) {
    int occupied = 0, vacant = 0;

    for (j = 0; j < 4; j++) {
    if (occupancy[i][j] == 1)
    occupied++;
    else
    vacant++;
    }

    printf("Floor %d -> Occupied: %d | Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}
