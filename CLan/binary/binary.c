/*
 * binary.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i;
	int num;

	printf("Input primative number");
	scanf("%d", &num);

	for (i = 0; i < 32; i++) {
		if (num & 0x80000000)
			putchar('1');
		else
			putchar('0');

		num <<= 1;
	}

	return 0;
}
