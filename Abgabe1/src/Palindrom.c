/*
 * Palindrom.c
 *
 *  Created on: 19.10.2022
 *      Author: student
 */

void checkForPalindrom(int input) {
	int zehntausender = input/10000;
	int tausender = input/1000 - zehntausender*10;
	int hunderter = input/100 - zehntausender*100 - tausender*10;
	int zehner = input/10 - zehntausender*1000 - tausender*100 - hunderter*10;
	int einer = input - zehntausender*10000 - tausender*1000 - hunderter*100 - zehner*10;
	// printf("%i %i %i %i %i \n", zehntausender, tausender, hunderter, zehner, einer);
	
	if(zehntausender == einer && tausender == zehner) {
	    printf("Die Zahl %05i ist ein Palindrom \n", input); 
	} else {
	    printf("Die Zahl %05i ist KEIN Palindrom \n", input); 
	}
}
