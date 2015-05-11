/*
 * float.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

#define PRINTF(a, b) printf(#a" / "#b" = %.1f\n", a / b)
#define PRINTD(a, b) printf(#a" / "#b" = %d\n", a / b)

int main(void) {

	PRINTF(5.0, 2.0);
	PRINTF(5.0, 2);
	PRINTF(5, 2.0);
	PRINTF(5., 2.);
	PRINTF(5, 2);
	puts("");

	PRINTD(5.0, 2.0);
	PRINTD(5.0, 2);
	PRINTD(5, 2.0);
	PRINTD(5., 2.);
	PRINTD(5, 2);

	return 0;
}
