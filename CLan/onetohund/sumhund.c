/*
 * sumhund.c
 *
 *  Created on: 2015. 5. 12.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int count, total;

	count = total = 0;

	while (count <= 100) {
		total += count;
		count++;
	}

	printf("Sum of 1 to 100 : %d\n", total);

	return 0;
}
