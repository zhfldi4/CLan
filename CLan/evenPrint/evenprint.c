/*
 * evenprint.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i = 0;

	for (i = 1; i <= 100; i++) {
		if ((i % 2) == 1)
			continue;
		printf("%d ", i);

		if ((i % 10) == 0)
			puts("");
	}

	return 0;
}
