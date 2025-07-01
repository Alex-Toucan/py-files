#include <stdio.h>

int main() {
	int i;
	i = 1;
	
	int count;
	
	printf("Enter a number: ");
	scanf("%d", &count);
	for (i = 1; i <= count; i = i + 1) 
		printf("%d \n", i);
	
	return 0;
}
