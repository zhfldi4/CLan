/*
 * logic.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	puts("And(&&)");
	printf("0 && 0 = %d\n", 0 && 0);
	printf("0 && 1 = %d\n", 0 && 1);
	printf("1 && 0 = %d\n", 1 && 0);
	printf("1 && 1 = %d\n", 1 && 1);


	puts("");
	puts("OR(||)");
	printf("0 || 0 = %d\n", 0 || 0);
	printf("0 || 1 = %d\n", 0 || 1);
	printf("1 || 0 = %d\n", 1 || 0);
	printf("1 || 1 = %d\n", 1 || 1);

	puts("");
	puts("NOT(!)");
	printf("!0 = %d\n", !0);
	printf("!1 = %d\n", !1);


	return 0;
}
