#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int inferior, superior;

 printf( "\n Introduzca n%cmero (entero) inferior: ", 163 );
 scanf( "%d", &inferior );
 printf( "\n Introduzca n%cmero (entero) superior: ", 163 );
 scanf( "%d", &superior );
 printf( "\n " );
 while (inferior<=superior)
 {
 printf( "%d ", inferior++);

 }

 return 0;
 }
