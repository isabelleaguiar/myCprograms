#include <stdio.h>

//simple program to do multiplication operation between integers

int main() {

	printf("Multiplication program!\n");
	int x;
	printf("Type the first number you want to multiplicative with:\n");
	scanf("%d", &x);
	int y;
	printf("Type the second number you want to multiplicative with:\n");
	scanf("%d", &y);
	int result = x*y;
	printf("The result is %d \n", result);

}
