#include <stdio.h>
#include <math.h>
int main()
{
#define DV1 3
#define DV2 4
//raizcuadrada(3*x^x+4*y^y)
float x,y,r;
printf("Ingresar el valor de X\n");
scanf("%f", &x);
printf("Ingresar el valor de Y\n");
scanf("%f", &y);
r = sqrt((DV1*(pow(x,x)))+(DV2*(pow(y,y))));
printf("El resultado es: %1f\n", r);
return 0;
}
