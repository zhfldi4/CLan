/*
 * timeprogrma.c
 *
 *  Created on: 2015. 5. 17.
 *      Author: root
 */

#include <stdio.h>
#include <time.h>

int main(void) {

	int i;
	time_t start, end, now;
	struct tm *timep;
	char buff[512];
	double diff;

	start = time(NULL);
	time(&now);

	timep = localtime(&now);
	printf("%d/%d/%d\n", 1900 + timep->tm_year, timep->tm_mon + 1,
			timep->tm_mday);

	puts(asctime(timep));
	puts(ctime(&now));

	strftime(buff, sizeof(buff), "%Y:%m:%d", timep);
	puts(buff);

	for (i = 0; i < 100000000; i++);

	end = time(NULL);
	diff = difftime(end, start);

	printf("Program execute Time: %.2f Seconds", diff);

	return 0;
}
