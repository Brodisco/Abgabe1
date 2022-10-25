/*
 * aufgabe8.c
 *
 *  Created on: 25.10.2022
 *      Author: maximilian
 */


void aufgabe8(unsigned int b, char c)
{
	for(int y = 0; y < b; y++)
	{
		for(int x = 0; x < b; x++)
		{
			//print the X of the Sandclock
			if ( ((y + x) == (b - 1)) || ((y == x) ) )
			{
				printf("%c", c);
			}else{
				//Decide if the clock is filled from the top or from the bottom up
				if ( (b % 2) == 0)
				{
					//Fill the top part of the clock
					if ( ((y + x) < b) && !((y - x) >= 0) )
					{
						printf("%c", c);
					}else{
						//Build the base plate
						if (y == (b - 1))
						{
							printf("%c", c);
						}else{
							printf(" ");
						}
					}
				}else{
					//Fill the bottom part of the clock
					if ( !((y + x) < b) && ((y - x) >= 0) )
					{
						printf("%c", c);
					}else{
						//Build the top plate
						if (y == 0)
						{
							printf("%c", c);
						}else{
							printf(" ");
						}
					}
				}
			}
		}
		printf("\n");
	}
}
