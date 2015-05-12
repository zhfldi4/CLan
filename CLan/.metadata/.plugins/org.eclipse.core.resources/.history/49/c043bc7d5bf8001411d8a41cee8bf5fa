/*
 * encrypt.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i = 0;
	char buf[20 + 1];

	puts("Input string to encrypt( < 20).");
	fgets(buf, sizeof(buf), stdin);

	while (buf[i]) {
		if (buf[i] != ' ')
			putchar(buf[i] + 1);
		else
			putchar(' ');
		i++;
	}
	return 0;
}
