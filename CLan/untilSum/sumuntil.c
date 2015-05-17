/*
 * sumuntil.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

int sum(int);

int main(void) {

	int num;

	int total = 0;

	puts("Input number");
	scanf("%d", &num);

	total = sum(num);

	printf("Total %d", total);

	return 0;
}

int sum(int x) {

	int i;
	int sum = 0;

	for (i = 1; i <= x; i++)
		sum += i;

	return sum;
}
