/*
 * pointer.c
 *
 *  Created on: 2015. 5. 14.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int a[3] = {10, 20, 30};
	int *pt = a;

	printf("Array\t\t: %p\n", a);
	printf("a[1]'s address: %p\n", &a[1]);
	printf("a + 1 value\t: %p\n", a + 1);
	printf("pt + 1 value\t: %p\n", pt + 1);
	printf("a[2]'s value\t: %d\n", a[2]);
	printf("*(pt + 2)'s value\t: %d\n", *(pt + 2));
	printf("*pt + 2 value\t: %d\n", *pt + 2);

	return 0;
}
