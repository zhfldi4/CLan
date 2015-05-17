/*
 * structReturn.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>

struct calc_t {
	int add;
	int sub;
	int mul;
	int div;
};


struct calc_t calculate (int, int);


int main(void) {

	struct calc_t value;

	int x = 7, y = 5;

	value = calculate(x, y);

	printf("%d + %d = %d\n", x, y, value.add);
	printf("%d - %d = %d\n", x, y, value.sub);
	printf("%d * %d = %d\n", x, y, value.mul);
	printf("%d / %d = %d\n", x, y, value.div);


	return 0;
}

struct calc_t calculate (int x, int y) {
	struct calc_t tmp;

	tmp.add = x + y;
	tmp.sub = x - y;
	tmp.mul = x * y;
	tmp.div = x / y;

	return tmp;
}
