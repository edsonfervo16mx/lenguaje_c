#include <stdio.h>
int main()
{
  #define CONSTANTEA 32
  #define CONSTANTEB 1.8
  int c;
  printf("Ingresar los grados Celsius\n");
  scanf("%d", &c);
  printf("%d Celsius equivale a %f Fahrenheit\n", c, ((CONSTANTEB * c)+ CONSTANTEA));
  return 0;
}
