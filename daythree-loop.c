#include <stdio.h>

int main() {
	int i;
	i = 1;
	
	while (i <= 10) {
		printf("%d \n", i);
		i = i + 1;
	}
		
	printf("\n");
	
	i = 1;
	do { 
		printf("%d \n", i);
		i = i + 1;
	} while (i <= 10);
	
	printf("\n");
	
	for (i = 1; i <= 100; i = i + 1) 
		printf("%d \n", i);
		
	int count;
	
	printf("Enter a number: ");
	scanf("%d", &count);
	for (i = 1; i <= count; i = i + 1) 
		printf("%d \n", i);
	
	return 0;
}
