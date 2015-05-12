/*
 * wordcut.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int ch;

	puts("Input strings.");

	while ((ch = getchar()) != EOF)
		if (ch == ' ') putchar(' \n');
		else putchar(ch);

	return 0;
}
