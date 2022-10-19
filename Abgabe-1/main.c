
//Aufgabe 1

#include <stdio.h>


#include <stdlib.h>
/*
int main(void)
{
	printf("   (\"`-''-/\").___..--''\"`-._\n");
	printf("    `6_ 6 )      `-. (    ). `-.__.`)\n");
	printf("    (_Y_.)'   ._   ) `._ `. ``-..-'\n");
	printf("   _..`--'_..-_/  /--'_.' ,'\n");
	printf("  (il),-''  (li),'  ((!.-'");
	return EXIT_SUCCESS;
}
*/
//Aufgabe 2

/*
int main(void)
{
	int Nummer;
	printf("Geben Sie ein vierstelligen Nummer ein: ");
	scanf("%d", &Nummer);

	if (Nummer<10000 && Nummer>=1000)
	{
	int ErsteStelle = Nummer / 1000;
	int ZweiteStelle = Nummer / 100 - ErsteStelle * 10;
	int DritteStelle = Nummer / 10 - ErsteStelle * 100 - ZweiteStelle * 10;
	int VierteStelle = Nummer - ErsteStelle * 1000 - ZweiteStelle * 100 - DritteStelle * 10;

	int Quersumme = ErsteStelle + ZweiteStelle + DritteStelle + VierteStelle;
	printf("\n");
	printf("Die Quersumme ist: %d", Quersumme);
	}

	else
	printf("Das ist nicht ein vierstelligen Nummer...");

	return EXIT_SUCCESS;
}
*/

//Aufgabe 3
//a)
/*
int main(void)
{
	int stunden = 12;
	int minuten = 20;
	int sekunden = 43;

	printf("Aktuelle Uhrzeit:    %d:%d:%d Uhr", stunden, minuten, sekunden);
	return EXIT_SUCCESS;
}
*/
//b)
/*
int main(void)
{
	int stunden = 12;
	int minuten = 20;
	int sekunden = 34;

	printf("Aktuelle Uhrzeit:    %02d:%02d:%02d Uhr", stunden, minuten, sekunden);
	return EXIT_SUCCESS;
}
*/

//Aufgabe 4
//a)
/*
int main (void)
{
	int x  = 24060;
	int stunden = x / 3600;
	int minuten = x / 60 - stunden * 60;
	int sekunden = x - minuten * 60 - stunden * 3600;

	printf("Prof. von Bodisco steht um  %2d:%02d:%02d Uhr auf.", stunden, minuten, sekunden);
	return EXIT_SUCCESS;
}
*/

//b)
/*
int main (void)
{
	int x  = 24060;

	printf("Prof. von Bodisco steht um  %2d:%02d:%02d Uhr auf.", x / 3600, x / 60 - x / 3600 * 60, x - (x / 60 - x / 3600 * 60) * 60 - x / 3600 * 3600);
	return EXIT_SUCCESS;
}
*/

//Aufgabe 5

int main (void)
{

}

