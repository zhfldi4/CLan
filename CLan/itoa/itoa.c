/*
 * itoa.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int num, int_num;
	char string_num[10];

	puts("Input num (> 10).");
	scanf("%d", &int_num);

	num = int_num;

	int i, j, tmp;

	i = 0;

	do {
		string_num[i++] = int_num %10 + '0';
	} while ((int_num = int_num / 10) > 0);

	string_num[i] = '\0';

	for (i = 0, j = strlen(string_num) - 1; i < j; i++, j--) {
		tmp = string_num[i];
		string_num[i] = string_num[j];
		string_num[j] = tmp;
	}

	printf("Input number is %d.\n", num);
	printf("Converted string is %s.\n", string_num);

	return 0;
}
