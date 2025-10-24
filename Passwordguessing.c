//A simple classic number guessing game made using C programming language
/*

NAME: Katuku Muthami 
REG. NO.: CT100/G/26212/25
DESC.: A simple classic number guessing game made using C programming language

*/

#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()

int main() {
    int secret_number;
    int guess = 0; // Initialize with a value that is not the secret number
    int attempts = 0;
    // Seed the random number generator once at the beginning of the program.
    srand(230000000000);

    // Generate the secret number only once.
    secret_number = 1 + rand() % 20;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have generated a secret number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // The while loop continues as long as the guess does not match the secret number.
    while (guess != secret_number) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        // Check the guess and provide feedback.
        if (guess > secret_number) {
            printf("Too high! Try again.\n");
            attempts = attempts+1;
        } else if (guess < secret_number) {
            printf("Too low! Try again.\n");
            attempts = attempts+1;
        } else {
            printf("Congratulations! You guessed the secret number!\n");
        	attempts = attempts+1;
        	printf("You attempted to find the number %d", attempts);
        	printf(" number of times\n");
		}
    }

    return 0;
}