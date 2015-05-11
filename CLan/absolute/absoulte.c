/*
 * absoulte.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int one;

	puts("Input number");
	scanf("%d", &one);

	if (one > 0)
		printf("Absoulte value: %d", one);
	else
		printf("Absoulte value: %d", one * -1);

	return 0;
}
