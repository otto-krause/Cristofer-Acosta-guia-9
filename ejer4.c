#include <stdio.h>
#include <stdlib.h>

 int main()
{
 int b, fact = 1;

 printf("Escribe un numero para calcular su factorial\n");
 scanf("%d", &b);

 while ( b > 1 ){
 fact = fact * b;
 b--;
 }
 printf("El factorial es: %d\n",  fact);
 return 0;
 }
