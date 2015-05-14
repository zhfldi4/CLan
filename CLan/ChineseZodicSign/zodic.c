/*
 * zodic.c
 *
 *  Created on: 2015. 5. 14.
 *      Author: root
 */

#include <stdio.h>

#define YEAR 1900

void print_zodic(int);

int main(void) {

	int birth_year;

	puts("Input Birth Year:");
	scanf("%d", &birth_year);

	print_zodic(birth_year);

	return 0;
}

void print_zodic(int birth_year) {

	birth_year -= YEAR;
	birth_year %= 12;

	switch (birth_year) {
	case 0:
		printf("Mouse");
		break;
	case 1:
		printf("Cow");
		break;
	case 2:
		printf("Tiger");
		break;
	case 3:
		printf("Rabbit");
		break;
	case 4:
		printf("Dragon");
		break;
	case 5:
		printf("Snake");
		break;
	case 6:
		printf("Horse");
		break;
	case 7:
		printf("Sheep");
		break;
	case 8:
		printf("Monkey");
		break;
	case 9:
		printf("Chicken");
		break;
	case 10:
		printf("Dog");
		break;
	case 11:
		printf("Pig");
		break;

	}

}
