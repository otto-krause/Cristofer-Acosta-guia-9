#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int num, prom, suma, mayor, total, prom1, I;
 while (I<=14) {
 ++I;
 printf(" El numero %d es: ",I);
 scanf("%d", &num);
 if (mayor<num)
 mayor=num;
 total=15*num;
 suma=suma+total;
 }
 prom=suma/15;
 prom1=prom/15;
 printf("El numero promedio es: \n%d\n", prom1);
 printf("El numero mas grande es: \n%d\n", mayor);

 }
