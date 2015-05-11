/*
 * mod2.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

#define MIN 60
#define HOUR 3600

int main(void) {

	int seconds;
	int hours, minutes;
	int min_left, sec_left;

	printf("Input seconds(< 86400): ");
	scanf("%d", &seconds);

	hours = seconds / HOUR;
	minutes = seconds / MIN;

	min_left = minutes % MIN;
	sec_left = seconds % MIN;

	printf("%d seconds is %d:%d:%d", seconds, hours, min_left, sec_left);

	return 0;
}
