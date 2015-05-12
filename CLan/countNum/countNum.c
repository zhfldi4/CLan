/*
 * countNum.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int i;
	int ch;
	int count_digit[10] = {0, };

	while ((ch = getchar())!= '\n') {
		switch (ch) {
		case '0' : count_digit[ch - '0']++; break;
		case '1' : count_digit[ch - '0']++; break;
		case '2' : count_digit[ch - '0']++; break;
		case '3' : count_digit[ch - '0']++; break;
		case '4' : count_digit[ch - '0']++; break;
		case '5' : count_digit[ch - '0']++; break;
		case '6' : count_digit[ch - '0']++; break;
		case '7' : count_digit[ch - '0']++; break;
		case '8' : count_digit[ch - '0']++; break;
		case '9' : count_digit[ch - '0']++; break;

		}
	}

	for (i = 0; i < 10; i++)
		printf("[%d] %d\n", i, count_digit[i]);

	return 0;
}
