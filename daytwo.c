#include <stdio.h>

int main() {
	printf("Hello day two!\n");
	
	/* Integers */
	int x;
	x = 4;
	
	printf("Enter a integer: ");
	scanf("%d", &x); /* User Input */

	
	/* Floating point values */
	float wage = 15.87;
	
	printf("Enter a wage: ");
	scanf("%f", &wage);
	
	/* Single characters */
	char initial = 'c';
	
	printf("Enter a initial: ");
	scanf(" %c", &initial);
	
	/* Final output */
	printf("%d\n", x);
	printf("Wage is $%f\n", wage);
	printf("Your initial is %c\n", initial);
	
	return 0;
}
