/*
 * menu.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int menu_num;

	do {
		puts("\nMenu List");
		puts("1. Ramen");
		puts("2. KimBab");
		puts("3. Bulgogi");
		puts("4. Exit");

		printf("\nSelect Menu:");
		scanf("%d", &menu_num);

	} while (menu_num >= 1 && menu_num <= 3);

	return 0;
}

