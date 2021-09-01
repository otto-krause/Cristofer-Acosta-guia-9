#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int venta=0, vendedor=0, dias=0, prom=0, total=0, suma=0, mayor=0, I=0;
 printf("Ingrese el numero de vendedores ");
 scanf("%d", &vendedor);
 printf("Ingrese los dias trabajados ");
 scanf("%d", &dias);
 while (I<vendedor) {
 I++;
 printf(" El vendedor %d vendio diariamente: ",I);
 scanf("%d", &venta);
 total=venta*dias;
 suma=suma+total;
 printf(" El vendedor %d vendio en total: %d\n", I, total);
 if (mayor<venta)
 mayor=venta;

 }
 prom=suma/vendedor;
 printf("El promedio de ventas es de: %d \n", prom);
 printf("El que mas vendio fue : %d \n", mayor);
 }
