/*
 * gogodan2.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

void gugudan(int dan);

int main(void) {

	int dan;

	puts("Input number to print gugudan");
	scanf("%d", &dan);

	gugudan(dan);

	return 0;
}

void gugudan(int dan) {

	int i;

	for (i = 1; i < 10; i++)
		printf("%d x %d = %d\n", dan, i, dan * i);


}
