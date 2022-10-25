/*
 * main.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aufgabe1();
void aufgabe2(int n);
void aufgabe3(int stunden, int minuten, int sekunden);
void aufgabe4(int count);
void aufgabe5(int n);
void aufgabe6(int n);
void aufgabe7(unsigned int breite, unsigned int hoehe, char c);
void aufgabe8(unsigned int b, char c);


int main(void)
{

	printf("Abgabe 1: 28.10.22 \n\n");

	aufgabe1();
	
	aufgabe2(123456789);

	aufgabe3(12, 9, 43);

	aufgabe4(24060);

	//aufgabe5(4);

	aufgabe6(11232211);
	
	aufgabe7(20,10,'x');

	aufgabe8(8, 'x');



	return EXIT_SUCCESS;
}
