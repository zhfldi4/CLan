/*
 * blankdel.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int ch;

	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			continue;

		putchar(ch);
	}

	return 0;
}
