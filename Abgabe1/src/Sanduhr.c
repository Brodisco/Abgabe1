/*
 * Uhrzeit2.c
 *
 *  Created on: 20.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>

void sanduhr(unsigned int b, char c)
{
	int const breite = b;
	int const hoehe = b;
	
	for (int y = 0; y < hoehe; y++) {
		for (int x = 0; x < breite; x++) {
			if (y == 0 || y == hoehe-1) {
				// Erste oder letze Zeile, daher c mit voller Breite drucken
				printf("%c",c);
			} else  {
				// Zeilen dazwischen
				if (x == y || x == hoehe-y-1) {
					printf("%c",c);
				} else {
					// Bei Gerade oben gefuellt, bei ungerade unten gefuellt
					if (breite%2==0) {
						// Bei gerader Breite oben ausfuellen
						if (x > y && x < hoehe-y-1) {
							// Nur innerhalb der Sanduhr
							printf("%c",c);
						} else {
							// Ausserhalb der Sanduhr
							printf(" ");
						}
					} else {
						// Bei ungerader Breite unten ausfuellen
						if (x < y && x > hoehe-y-1) {
							// Nur innerhalb der Sanduhr
							printf("%c",c);
						} else {
							// Ausserhalb der Sanduhr
							printf(" ");
						}
					}
							
					// printf(" ");
				}
			}
		}
		printf("\n");
	}
}