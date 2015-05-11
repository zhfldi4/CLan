/*
 * usingmacro.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */


#include <stdio.h>

#define SIZE 100

int main(void) {

	printf("%d\n", 5 * SIZE);
	printf("%d\n", 3 * SIZE);
	printf("%d\n", 5 / SIZE);
	printf("%d\n", 7 * SIZE);
	printf("%d\n", 5 + SIZE);


	return 0;
}
