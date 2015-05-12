/*
 ============================================================================
 Name        : return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int add(int, int);

int main(void) {

	int x, y;
	int result;

	puts("Input two number to add");
	scanf("%d %d", &x, &y);

	result = add(x, y);

	printf("Result: %d", result);


	return 0;
}

int add(int x, int y) {

	return x + y;
}
