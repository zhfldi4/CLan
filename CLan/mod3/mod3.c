/*
 * mod3.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

#define MULTIPLE 7

int main(void ) {

	int i;
	int num;

	puts("Input number between 1 to 100.");
	scanf("%d", &num);

	for (i = 1; i < num; i++) {
		if ((i % MULTIPLE) == 0)
			printf("%d\n", i);
	}

	return 0;
}
