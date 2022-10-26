/*
 * main.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>

void aufgabe1()
{
 	printf("Aufgabe 1 \n");

	printf("(\"`-''-/\").___..--''\"`-._ \n");
	printf(" `6_ 6  )   `-.  (     ).`-.__.`)\n");
	printf(" (_Y_.)'  ._   )  `._ `. ``-..-' \n");
	printf("   _..`--'_..-_/  /--'_.'\n");
	printf("  ((((.-''  ((((.'  (((.-'\n");

	printf("\n");
}

/*
void aufgabe2(int n)
{
	int squareSum = 0;
	int input = n;

	while(n > 0)
	{
		//squareSum += n % 10;
		squareSum = squareSum + (n % 10);
		n /= 10;
	}

	printf("Quersumme: %d -> %d \n\n", input, squareSum);
}
*/

void aufgabe2(int zahl)
{
	printf("Aufgabe 2\n");

	int tausender = zahl / 1000;
	int hunderter = zahl / 100 - tausender * 10;
	int zehner = zahl / 10 - tausender * 100 - hunderter * 10;
	int einer = zahl - tausender * 1000 - hunderter * 100 - zehner * 10;

	// printf("%i, %i, %i, %i\n", tausender, hunderter, zehner, einer);
	int ergebnis = tausender + hunderter + zehner + einer;

	printf("Quersumme: %i -> %i\n\n", zahl, ergebnis);
}

void aufgabe3(int stunden, int minuten, int sekunden)
{
	printf("Aufgabe 3 \n");

	printf("Aktuelle Uhrzeit (a): \t %d:%d:%d Uhr \n", stunden, minuten, sekunden);
	printf("Aktuelle Uhrzeit (b): \t %02d:%02d:%02d Uhr \n\n", stunden, minuten, sekunden);
}

void aufgabe4(int input)
{
	printf("Aufgabe 4 \n");

	int hours = input / 3600;
	int minutes = input / 60 - hours * 60;
	int seconds = input - hours * 3600 - minutes * 60;

	printf("(a) Prof. von Bodisco steht um %02i:%02i:%02i Uhr auf. \n", hours, minutes, seconds);

	printf("(b) Prof. von Bodisco steht um %02i:%02i:%02i Uhr auf. \n", input/3600, input/60-input/3600*60, input - (input/3600)*3600 - (input/60-input/3600*60)*60);
}

void aufgabe5()
{
	printf("Aufgabe 5 \n");

	for(int x = 0; x < 10000; x++){
		printf("%04i\n", x);
	}

	printf("\n");
}

void aufgabe6(int input)
{
	printf("\nAufgabe 6 \n");

	int zehntausender = input/10000;
	int tausender = input/1000 - zehntausender*10;
	int hunderter = input/100 - zehntausender*100 - tausender*10;
	int zehner = input/10 - zehntausender*1000 - tausender*100 - hunderter*10;
	int einer = input - zehntausender*10000 - tausender*1000 - hunderter*100 - zehner*10;
	// printf("%i %i %i %i %i \n", zehntausender, tausender, hunderter, zehner, einer);

	if(zehntausender == einer && tausender == zehner) {
	    printf("Die Zahl %05i ist ein Palindrom \n\n", input);
	} else {
	    printf("Die Zahl %05i ist KEIN Palindrom \n\n", input);
	}

}




	return EXIT_SUCCESS;
}
