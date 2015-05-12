/*
 * triangle1.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 0; j < i; j++)
			printf("*");
		puts("");
	}

	return 0;
}
