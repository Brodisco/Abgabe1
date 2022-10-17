/*
 ============================================================================
 Name        : Abgabe1.c
 Author      : Mario Wegmann
 Version     :
 Copyright   : Hochschule Augsburg
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printTiger(void);
int quersumme(int);
void printTime(int, int, int);
void printTimeFormatted(int, int, int);
char* convertSecondsToTime(int);
void printAllPINs();

int main(void) {
	/*
	 *
	 * Folgendes ASCII Bild auf der Konsole ausgeben
	("`-''-/").___..--''"`-._
 	 `6_ 6  )   `-.  (     ).`-.__.`)
 	 (_Y_.)'  ._   )  `._ `. ``-..-'
   	   _..`--'_..-_/  /--'_.'
  	  ((((.-''  ((((.'  (((.-'
	 */
	/*
	printf("Aufgabe 1:\n");
	printTiger();

	printf("\nAufgabe 2:\n");

	printf("%i\n", quersumme(3456));
	printf("%i\n", quersumme(1867));
	printf("%i\n", quersumme(1117));

	printf("\nAufgabe 3:\n");

	int stunden = 12;
	int minuten = 02;
	int sekunden = 43;

	//printTime(stunden, minuten, sekunden);
	//printTimeFormatted(stunden, minuten, sekunden);

	printf("\nAufgabe 4:\n");
*/
	int x = 24060;

	convertSecondsToTime(x);

	//input - hours * 3600 - minutes * 60;

	printf("Prof. von Bodisco steht um %02i:%02i:%02i Uhr auf. \n", x/3600, x/60-x/3600*60, x - (x / 3600)* 3600 -  ((x / 60) - x / 3600) * 60);

	printf("\nAufgabe 5:\n");

	//printAllPINs();



	return EXIT_SUCCESS;
}
