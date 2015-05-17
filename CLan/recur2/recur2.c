/*
 * recur2.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

long factorial(int);

int main(void) {

	int num;

	printf("Input num( < 16) :");
	scanf("%d", &num);

	printf("%d's factorial is %ld.", num, factorial(num));

	return 0;
}

long factorial(int num) {
	long result;

	if (num > 0)
		result = num * factorial(num - 1);
	else
		result = 1;

	return result;
}
