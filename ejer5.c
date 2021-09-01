#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int base, exponte, total, I=1;
 total=1;
 printf("Numero de base: ");
 scanf("%d", &base);
 printf("Numero de exponente: ");
 scanf("%d", &exponte);
 system ("cls");

 while(I<=exponte){
 total=total*base;
 I++;
 }

 printf("El numero es: \n%d\n", total);

 }
