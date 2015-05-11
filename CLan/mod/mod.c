/*
 * mod.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i;

	for (i = 0; i < 26; i++) {
		printf("%c ", 'a' + i);

		if (((i + 1) % 10) == 0)
			putchar('\n');
	}

	return 0;
}
