#include <stdio.h>

int main() {
	int one, two;
	char op;
	
	printf("Enter an expression: ");
	scanf("%d %c%d", &one, &op, &two);
	
	/* Math */
	
	int ans;
	
	if (op == '+') {
		ans = one + two;
	} else if (op == '-') {
		ans = one - two;
	} else if (op == '*') {
		ans = one * two;
	} else if (op == '/') {
		ans = one / two;
	} else {
		printf("Error: that operator is not defined.\n");
		return 44;
	}
	
	printf("%d %c %d = %d\n", one, op, two, ans);
	
	return 0;
}
