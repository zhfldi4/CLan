/*
 * rSwap.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

void swap(int *, int *);

int main(void) {

	int x = 7, y = 5;

	puts("Inside main() function");
	printf("1. x = %d, y = %d\n", x, y);

	swap(&x, &y);

	puts("Inside main() function");
	printf("2. x = %d, y = %d", x, y);


	return 0;
}


void swap(int *x, int *y) {

	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;

	puts("Inside swap() function");
	printf("3. x = %d, y = %d\n", *x, *y);
}
