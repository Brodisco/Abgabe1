/*
 * Uhrzeit2.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */

void convertSecondsToTime(int input) {
	int hours = input / 3600;
	int minutes = input / 60 - hours * 60;
	int seconds = input - hours * 3600 - minutes * 60;

	printf("Prof. von Bodisco steht um %02i:%02i:%02i Uhr auf. \n", hours, minutes, seconds);
}
