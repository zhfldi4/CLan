/*
 * format.c
 *
 *  Created on: 2015. 5. 11.
 *      Author: root
 */

#include <stdio.h>

int main(void) {

	char * name[] = {"Jung", "Park", "Kim"};
	int grade[3] = {24, 17, 31};

	printf("%s %s %s\n", name[0], name[1], name[2]);
	printf("%d %d %d\n", grade[0], grade[1], grade[2]);
	puts("");
	printf("%7s %7s %7s\n", name[0], name[1], name[2]);
	printf("%7d %7d %7d\n", grade[0], grade[1], grade[2]);

	return 0;
}
