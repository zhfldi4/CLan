/*
 * global.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

int add, subtract, multiply, divide;

void calculate(int, int);

int main(void) {

	int x = 7, y = 5;

	calculate(x, y);

	printf("%d + %d = %d\n", x, y, add);
	printf("%d - %d = %d\n", x, y, subtract);
	printf("%d * %d = %d\n", x, y, multiply);
	printf("%d / %d = %d\n", x, y, divide);


	return 0;
}


void calculate(int x, int y) {
	add = x + y;
	subtract = x - y;
	multiply = x * y;
	divide = x / y;
}
