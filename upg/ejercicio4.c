#include <stdio.h>
int main()
{
  float radio, altura, area, volumen;
  printf("Ingresar radio\n");
  scanf("%f", &radio);
  printf("Ingresar altura\n");
  scanf("%f", &altura);

  area = ((2* 3.14)*radio)*(altura+radio);
  volumen = (3.14 * (radio * radio))* altura;

  printf("Su area es: %.2f\n", area);
  printf("Su volumen es: %.2f\n", volumen);

  return 0;
}
