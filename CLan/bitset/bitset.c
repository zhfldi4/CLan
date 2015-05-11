/*
 * bitset.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int bit = 8;		// 0x00001000
	int result;

	result = bit | 0x00000001;
	/*
	 * 0x00001000
	 * 0x00000001
	 * ------------
	 * 0x00001001
	 */

	printf("Result is %d\n", result);

	return 0;
}
