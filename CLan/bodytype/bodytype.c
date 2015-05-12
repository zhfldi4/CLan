/*
 * bodytype.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int height;
	int weight;
	int standard;

	puts("Input your tall and weight: ");
	scanf("%d %d", &height, &weight);

	standard = (int) ((height - 100) * 0.9);

	if ((standard - weight) > 5)
		puts("PePero");
	else if ((standard - weight) < -5)
		puts("DDongDDong");
	else
		puts("Standard body type!!");

	return 0;
}
