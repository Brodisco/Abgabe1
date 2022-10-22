/*
 * main.c
 *
 *  Created on: 17.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	/*Aufgabe 1

	printf("   (%c`-''-/%c).___..--''%c`-._  	\n",34,34,34);
	printf("    `6_ 6 ) `-. (     ).`-.__.`)     	\n");
	printf("    (_Y_.)' ._ ) `._ `. ``-..-'  	\n");
	printf("  _..`--'_..-_/ /--'_.' ,'			\n");
	printf(" (il),-'' (li),' ((!.-' 			\n");
	*/

	/*Aufgabe 2

	int Zahl = 1117;

	int TBereich = Zahl / 1000 ;
	int HBereich = Zahl / 100 - TBereich * 10;
	int ZBereich = Zahl / 10 - TBereich * 100 - HBereich * 10;
	int EBereich = Zahl - TBereich * 1000 - HBereich * 100 -ZBereich * 10;

	int Quersumme = TBereich + HBereich + ZBereich + EBereich;
	printf("%d",Quersumme);
	*/

	/*Aufgabe 3 a

	int Stunden = 12;
	int Minuten = 20;
	int Sekunden = 43;

	printf("Aktuelle Uhrzeit:%2.0d:%2.0d:%2.0d Uhr",Stunden,Minuten,Sekunden );
	//b ist mit %2.0d für gleichen abstand
	*/

	/*Aufgabe 4 a

	int Sekunden = 24060;
	int Minuten = Sekunden / 60.0;
	int Stunden = Minuten /60.0;

	int ISekunden = Sekunden - Minuten * 60;
	int IMinuten = Minuten - Stunden * 60;
	int IStunden = Stunden;


	printf("Uhrzeit = %2.d:%2.d:%2.d ",IStunden,IMinuten,ISekunden);
	*/

	/*Aufgabe 4 b

	int zeit = 24060;
	printf("%2.d:%2.d:%2.d",zeit/60/60,zeit/60 - zeit/60/60*60,zeit - zeit/60*60);
	*/

	/*Aufgabe 5

	for(int T = 0;T < 10;T++)
	{

		for(int H = 0;H < 10;H++)
		{

			for(int Z = 0;Z < 10;Z++)
			{

				for(int E = 0;E < 10;E++)
				{

					printf("%d", T);
					printf("%d", H);
					printf("%d", Z);
					printf("%d\n", E);

				}

			}

		}

	}

	*/

	/*Aufgabe 6

	int Zahl = 44444;
	int ZT = Zahl /10000;
	int T = Zahl /1000 - ZT * 10;
	int H = Zahl /100 - ZT * 100 - T * 10;
	int Z = Zahl /10 - ZT * 1000 - T * 100 - H * 10;
	int E = Zahl - ZT * 10000 - T * 1000 - H * 100 - Z * 10;

	if(ZT == E)
	{
		if(T == Z)
		{
			printf("Palindrom");
		}
		else
		{
			printf("kein Palindrom");
		}
	}

	printf("    ZT%d T%d H%d Z%d E%d", ZT, T, H, Z, E);
	*/

	//Aufgabe 7



	return 0;
}
