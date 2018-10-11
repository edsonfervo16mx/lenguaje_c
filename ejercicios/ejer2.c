#include <stdio.h>
int main()
{
#define CONSTANTE 2
float x,w;
printf("Ingresar el valor de x\n");
scanf("%f", &x);
printf("Ingresar el valor de w\n");
scanf("%f", &w);
printf("El resultado es: %f\n", ((x+w)/(CONSTANTE*w)) );
return 0;
}
