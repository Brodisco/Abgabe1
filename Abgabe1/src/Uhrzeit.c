/*
 * Uhrzeit.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */

void printTime(int stunden, int minuten, int sekunden) {
	printf("Aktuelle Uhrzeit:    %i:%i:%i Uhr\n", stunden, minuten, sekunden);
}

void printTimeFormatted(int stunden, int minuten, int sekunden) {
	printf("Aktuelle Uhrzeit:    %02i:%02i:%02i Uhr\n", stunden, minuten, sekunden);
}
