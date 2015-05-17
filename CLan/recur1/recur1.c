/*
 * recur1.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

int sum(int);

int main(void) {

	int result = 0;

	result = sum(100);

	printf("Result = %d\n", result);
	return 0;
}

int sum(int x) {
	if (x == 0)
		return x;
	else
		return x + sum(x - 1);
}
