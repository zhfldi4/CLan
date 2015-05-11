/*
 * grade.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	int score;

	printf("Input score!!");
	scanf("%d", &score);

	if ((score <= 100) && (score > 90))
		puts("Grade A");
	else if ((score <= 90) && (score > 80))
		puts("Grade B");
	else if ((score <= 80) && (score > 70))
		puts("Grade C");
	else if ((score <= 70) && (score > 60))
		puts("Grade D");
	else
		puts("Grade F");

	return 0;
}
