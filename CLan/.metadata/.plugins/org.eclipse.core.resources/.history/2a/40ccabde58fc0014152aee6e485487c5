/*
 * structPointer.c
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

void calculate(int, int, struct calc_t *);

int main(void) {

	int x = 7, y = 5;
	struct calc_t tmp;

	calculate(x, y, *tmp);

	printf("%d + %d = %d\n", x, y, tmp.add);
	printf("%d - %d = %d\n", x, y, tmp.sub);
	printf("%d * %d = %d\n", x, y, tmp.mul);
	printf("%d / %d = %d\n", x, y, tmp.div);

	return 0;
}

void calculate(int x, int y, struct calc_t * tmp) {
	tmp->add = x + y;
	tmp->sub = x - y;
	tmp->mul = x * y;
	tmp->div = x / y;
}
