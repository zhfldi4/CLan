/*
 * operation.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int one, two;
	char operator;

	puts("Input num, operator, num(ex: 5 * 12):");
	scanf("%d %c %d", &one, &operator, &two);

	if (operator == '+')
		printf("%d + %d = %d", one, two, one + two);
	else if (operator == '-')
		printf("%d - %d = %d", one, two, one - two);
	else if (operator == '*')
			printf("%d * %d = %d", one, two, one * two);
	else if (operator == '/') {
		if (two == 0)
			puts("argument two is Zero!!");
		else
			printf("%d / %d = %d", one, two, one / two);
	}

	return 0;
}
