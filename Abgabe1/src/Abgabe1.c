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
void convertSecondsToTime(int);
void convertSecondsToTimeWithoutAdditionalVariables(int);
void printAllPINs();
void checkForPalindrom(int);
void rechteck(unsigned int, unsigned int, char);

int main(void) {
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

	printTime(stunden, minuten, sekunden);
	printTimeFormatted(stunden, minuten, sekunden);

	printf("\nAufgabe 4:\n");

	int x = 24060;
	convertSecondsToTime(x);
	convertSecondsToTimeWithoutAdditionalVariables(x);

	printf("\nAufgabe 5:\n");

	printAllPINs();
	
	printf("\nAufgabe 6:\n");
	
	int palindrom = 54145;
	
	void checkForPalindrom(input);
	
	printf("\nAufgabe 7:\n");
	
	rechteck(4, 6, 'x');


	return EXIT_SUCCESS;
}
