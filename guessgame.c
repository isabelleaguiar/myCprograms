#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// simple game to guess a number

int main() {

	printf("\n\n");
	printf("      ____\n");
	printf("     ||""||    *************************************************\n");
	printf("     ||__||    **** Can you guess what number I'm thinking? ****\n");
	printf("     [ -=.]`)  *************************************************\n");
	printf("     ====== 0\n\n");
	printf("Choose a level of difficulty:\n");
	printf("type 1 for easy | type 2 for medium | type 3 for difficult\n");

	int seconds = time(0);
	srand(seconds);
	int ale = rand();
	int secretnum = ale % 100;
	int guess;
	int try = 1;
	int limittry;
	int right = 0;
	double score = 1000;
	int lvl;

	scanf("%d", &lvl);

	if(lvl == 1) {
	
		limittry = 11;
	
	}
	
	else if (lvl == 2){
	
		limittry = 8;
	
	} 
	
	else {
	
		limittry = 5;
	
	}

	for(int i = 1; i <= limittry; i++){

		printf("\nAttemps %d.\n", try);
		printf("\nGuess the number...\n");

		scanf("%d", &guess);
		
		if(guess < 0) {
			printf("Negative numbers doesn't count!");
			
			continue;
		}

		right = (guess == secretnum);
		int larger = guess > secretnum;
		
			if(right) {
				printf("You got it!\n");
				
				break;
			}
			
			else if(larger) {
				printf("Not yet... It's a lower number.\n");
			}
			 
			else {
			
				printf("Not yet... It's a greater number.\n");
			}
			
			try++;
	
			double losts = abs(guess - (double)secretnum) / 2.0;
			score = score - losts;
	}

	if(right) {
		printf("End game! You guess with %d attempts!\n", try);
		printf("You score is %.1f points.\n", score);
	} else {
		printf("You lose... Try again!\n");
	}
}
