#include <stdio.h>

int main() {
	int one, two;
	char op;
	
	printf("Enter an expression: ");
	scanf("%d %c%d", &one, &op, &two);
	
	/* Math */
	
	int ans;
	
	switch (op) {
		case '+': ans = one + two; break;
		case '-': ans = one - two; break;
		case '*': ans = one * two; break;
		case '/': ans = one / two; break;
		default: printf("Error: that operator is not defined\n");
				 return 1;
	}
	
	printf("%d %c %d = %d\n", one, op, two, ans);
	
	return 0;
}
