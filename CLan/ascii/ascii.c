/*
 * ascii.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i;

	for (i = 20; i <= 127; i++) {
		if (i % 10 == 0)
			putchar('\n');
		printf("(%3d) %2c", i, i);
	}

	return 0;
}
