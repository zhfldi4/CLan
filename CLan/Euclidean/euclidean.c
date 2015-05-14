/*
 * euclidean.c
 *
 *  Created on: 2015. 5. 14.
 *      Author: root
 */

#include <stdio.h>

int gcd(int , int);


int main(void) {

	int a, b;
	puts("Input a, b");
	scanf("%d %d", &a, &b);

	int gcd_value =  gcd(a, b);

	printf("GCD: %d\n", gcd_value);
	printf("LCM: %d\n", a * b / gcd_value);
	return 0;
}

int gcd(int x, int y) {

	if (y == 0) return x;
	gcd(y, x % y);

}
