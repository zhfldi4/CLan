/*
 * nested.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	puts(__DATE__);
	puts(__TIME__);
	printf("%d \n", __LINE__);
	puts(__FILE__);

	return 0;
}
