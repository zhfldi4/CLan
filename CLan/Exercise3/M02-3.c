/*
 * M02-3.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int num1, num2;

	puts("Input two number: ");
	scanf("%d %d", &num1, &num2);

	int result = 1;
	int i;

	for (i = 0; i < num2; i++) {
		result *= num1;
	}

	printf("%d ^ %d = %d", num1, num2, result);

	return 0;
}
