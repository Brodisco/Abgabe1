/*
 * Rectangle.c
 *
 *  Created on: 19.10.2022
 *      Author: student
 */

void rechteck(unsigned int breite, unsigned int hoehe, char c) {
   // Obere Seite
   for (int i = 0; i < breite; i++) {
       printf("%c", c);
   }
   printf("\n");
   
   // Koerper 
   
   for (int k = 0; k < hoehe - 2; k++) { 
       printf("%*c%c\n", -breite+1, c, c);
   }
   
   // Untere Seite
   for (int m = 0; m < breite; m++) {
       printf("%c", c);
   }
   printf("\n");
}
