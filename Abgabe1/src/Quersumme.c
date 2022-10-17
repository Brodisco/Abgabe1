/*
 * Quersumme.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */


int quersumme(int zahl) {
	int tausender = zahl / 1000;
	int hunderter = zahl / 100 - tausender * 10;
	int zehner = zahl / 10 - tausender * 100 - hunderter * 10;
	int einer = zahl - tausender * 1000 - hunderter * 100 - zehner * 10;

	// printf("%i, %i, %i, %i\n", tausender, hunderter, zehner, einer);
	int ergebnis = tausender + hunderter + zehner + einer;
	return ergebnis;
}
