#include <stdio.h>
int main()
{
  int opcion;
  float entrada,resultado;
  printf("Seleccionar un tipo de conversion\n");
  printf("1 ) De Kelvin a Fahrenheit\n");
  printf("2 ) De Fahrenheit a Celsius\n");
  printf("3 ) De Celsius a Kelvin\n");
  scanf("%d",&opcion );
  printf("Ingresar el valor a convertir\n");
  scanf("%f",&entrada );
  switch (opcion) {
    case 1:
      resultado = ((9*(entrada - 273.15))/5)+32;
      break;
    case 2:
      resultado = (5*(entrada-32))/9;
      break;
    case 3:
      resultado = entrada + 273.15;
      break;
  }
  printf("%.2f : es equivalente a: %.2f\n", entrada,resultado);
  return 0;
}
