/*
 * M02-1.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

#define DAY 86400

int main(void) {

	int day;

	puts("Input seconds");
	scanf("%d", &day);

	int calc_day = day / DAY;
	int day_left = (day % DAY) / 3600;

	printf("%d day %d hour", calc_day, day_left);

	return 0;
}
