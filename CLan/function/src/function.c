/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int bigger_number(int, int);

int main(void) {

	int result;
	int x, y;

	printf("Input two number: ");
	scanf("%d %d", &x, &y);

	result = bigger_number(x, y);

	if (result == 0)
		puts("Two number is same.");
	else
		printf("Biggest number is %d.\n", result);

	return 0;
}

int bigger_number(int x, int y) {

	if (x > y)
		return x;
	else if (x < y)
		return y;
	else if (x == y)
		return 0;
}
