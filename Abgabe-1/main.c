/*
 * main.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	/*
	printf("   (%c`-''-/%c).___..--''%c`-._  	\n",34,34,34);
	printf("    `6_ 6 ) `-. (     ).`-.__.`)     	\n");
	printf("    (_Y_.)' ._ ) `._ `. ``-..-'  	\n");
	printf("  _..`--'_..-_/ /--'_.' ,'			\n");
	printf(" (il),-'' (li),' ((!.-' 			\n");
	*/

	/*int Zahl = 1117;

	int TBereich = Zahl / 1000 ;
	int HBereich = Zahl / 100 - TBereich * 10;
	int ZBereich = Zahl / 10 - TBereich * 100 - HBereich * 10;
	int EBereich = Zahl - TBereich * 1000 - HBereich * 100 -ZBereich * 10;

	int Quersumme = TBereich + HBereich + ZBereich + EBereich;
	printf("%d",Quersumme);
	*/

	/*
	int Stunden = 12;
	int Minuten = 20;
	int Sekunden = 43;

	printf("Aktuelle Uhrzeit:%2.0d:%2.0d:%2.0d Uhr",Stunden,Minuten,Sekunden );
	*/

	float Sekunden = 24060;
	int Minuten = Sekunden / 60.0;
	int Stunden = Minuten /60.0;

	int ISekunden = (int)Sekunden - Minuten * 60;
	int IMinuten = Minuten - Stunden * 60;
	int IStunden = Stunden;


	printf("Uhrzeit = %2.f:%2.d:%2.d ",IStunden,IMinuten,ISekunden);

	return 0;
}
