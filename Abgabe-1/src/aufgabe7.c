/*
 * rectangle.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */


#include <stdio.h>
#include <stdlib.h>

void aufgabe7(unsigned int breite, unsigned int hoehe, char c)
{
	for (int y = 0; y <= hoehe; y++)
	{
		for (int x = 0; x <= breite; x++)
		{
			if ((x == 0) || (x == breite) || (y == 0) || (y == hoehe))
			{
				printf("%c", c);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
