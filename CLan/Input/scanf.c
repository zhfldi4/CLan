/*
 * scanf.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int age;

	printf("How old are you?? ");
	scanf("%d", &age);

	printf("%d", age * 365);

	return 0;
}
