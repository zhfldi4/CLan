/*
 ============================================================================
 Name        : scope.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int x;
	{} {} {}

	for (x = 0; x < 10; x++)
		printf("%d ", x);

	{
		int x;
	}

	{
		int x; int x2; int x3;
	}

	puts("");

	{
		int x = 1; int x2 = 2; int x3 = 3;
		printf("%d %d %d", x, x2, x3);
	}

	return 0;
}
