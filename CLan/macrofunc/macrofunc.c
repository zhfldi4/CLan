/*
 * macrofunc.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

#define PSUB(x) printf("The value of (10 - x) is %d\n", 10 -x)
#define PSUB2(x) printf("The value of (10 - "#x") is %d\n", 10 -x)

int main(void) {

	PSUB(5);
	PSUB(7);

	PSUB2(5);
	PSUB2(7);


	return 0;
}
