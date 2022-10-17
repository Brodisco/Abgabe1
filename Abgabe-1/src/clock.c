/*
 * clock.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>

void printTime(int stunden, int minuten, int sekunden)
{
	printf("%d:%d:%d Uhr \n", stunden, minuten, sekunden);
	printf("%02d:%02d:%02d Uhr \n", stunden, minuten, sekunden);
}

void printTimeFromCount(int count)
{
	int hours = 0;
	int minuts = 0;
	int seconds = 0;

	hours = (int) count / 3600;
	count = count % 3600;

	minuts = (int) count / 60;
	count = count % 60;

	seconds = count;

	printf("Prof. von Bodisco steht um %d:%02d:%02d auf. \n", hours, minuts, seconds);
}
