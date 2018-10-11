#include <stdio.h>
int main()
{
  #define CONSTANTEA 32
  #define CONSTANTEB 1.8
  int fah;
  printf("Ingresar los grados Fahrenheit\n");
  scanf("%d", &fah);
  printf("%d Fahrenheit es igual a %f Celsius\n", fah, ((fah - CONSTANTEA)/CONSTANTEB));
  return 0;
}
