#include <stdio.h>
int main()
{
#define IVA .16
float total;
printf("Ingresar el monto total de la compra:\n");
scanf("%f", &total);
printf("El monto de iva es: %.2f\n", total*IVA);
printf("El monto del Subototal es: %.2f\n", total-(total*IVA));
printf("El monto total es: %.2f\n", total);
return 0;
}
