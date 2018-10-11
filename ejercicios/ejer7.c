#include <stdio.h>
int main()
{
  /*
  Hacer un programa que convierta un número mayor de 100000,
  dado en segundos a horas minutos y segundos. Ejemplo 12015 segundos es
  equivalente a 3 horas, 20 minutos, 15 segundos
  */
  int n,h,m,s;
  printf("Ingresar un numero mayor a 100,000\n");
  scanf("%d", &n);
  h = n/10000;
  m = (n%10000)/100;
  s = (n%10000)-(m*100);
  printf("Hora generada:\n %d: %d : %d\n", h,m,s);
  return 0;
}
