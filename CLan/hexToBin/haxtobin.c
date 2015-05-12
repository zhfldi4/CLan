/*
 * haxtobin.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	char *data = "3AF7";

	int i, j;
	char buf[32];

	// string copy
	strcpy(buf, "");

	for (i = 0; i < 8; i++) {
		switch (data[i]) {
		case 'A':
			strcat(buf, "1010");
			continue;
		case 'B':
			strcat(buf, "1011");
			continue;
		case 'C':
			strcat(buf, "1100");
			continue;
		case 'D':
			strcat(buf, "1101");
			continue;
		case 'E':
			strcat(buf, "1110");
			continue;
		case 'F':
			strcat(buf, "1111");
			continue;
		}

		for (j = 0; j < 4; j++)
			if ((((data[i] - '0') << j) & 0x8) > 0)
				strcat(buf, "1");
			else
				strcat(buf, "0");
	}

	buf[ 31] = '\0';
	puts(buf);
	return 0;
}
