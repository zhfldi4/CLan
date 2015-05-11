/*
 * max.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int one, two, result;

	puts("Input two numbers");
	scanf("%d %d", &one, &two);

	result = (one > two) ? one : two;

	printf("The largest number is %d\n", result);

	return 0;
}
