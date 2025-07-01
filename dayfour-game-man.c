#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int comp, guess, tries, range;
	char play = 'y';
	
	srand(time(0));
	
	printf("Welcome to the guessing game. Guess or suffer.\n");
	
	while (play == 'y') {
		printf("What number range?: ");
		scanf("%d", &range);
		
		comp = rand() % range;
		tries = 0;

		do {
			printf("Enter a guess from 1 to %d: ", range);
			scanf("%d", &guess);
			tries = tries + 1;
			
			if (comp == guess) {
				printf("Correct! It took %d tries!\n", tries);
			} else {
				if (guess < comp) {
					printf("Incorrect! too low!\n");
				} else {
					printf("Incorrect! too high!\n");
				}
			}
		} while (comp != guess);
		printf("Do you want to continue (y/n)?: ");
		scanf(" %c", &play);
	}
	
	return 0;
}
