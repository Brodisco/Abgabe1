/*
 * aufgabe4.c
 *
 *  Created on: 25.10.2022
 *      Author: maximilian
 */


void aufgabe4(int count)
{
	int hours = 0;
	int minuts = 0;
	int seconds = 0;

	hours = (int) count / 3600;
	count = count % 3600;

	minuts = (int) count / 60;
	count = count % 60;

	seconds = count;

	printf("Prof. von Bodisco steht um %d:%02d:%02d auf. \n\n", hours, minuts, seconds);
}
