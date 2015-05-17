/*
 * test.c
 *
 *  Created on: 2015. 5. 14.
 *      Author: root
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp;
	char c;

	fp = fopen("chr.txt", "w");

	if (fp == NULL) {
		printf("File Open Error");
		exit(1);
	}

	printf("Input character Until the enter\n ");
	printf("Input: ");

	while ((c = getchar()) != '\n') {
		printf("%c", c);
		fputc(c, fp);
	}

	fclose(fp);

	return 0;
}
