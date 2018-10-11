#include <stdio.h>
int main()
{
  /*
  De los estudiantes que se matriculan en la UNAT-A, los ex soldados pagan 30 soles
  por curso en el que se matriculen, mientras que los demás (regulares), pagan 50
  soles por curso. Diseñe un programa en el que el usuario
  introduce los datos del estudiante (ex soldado o regular) y el número de cursos y las
  salidas sean la categoría del estudiante (ex soldado o regular), número de cursos y
  los costos totales por los cursos a llevar.
  */
  #define PAGONORMAL 50
  #define PAGODESCUENTO 30
  int ncursos;
  char categoria[20];
  printf("Ingresar la categoria\n");
  scanf("%s", &categoria[0]);
  printf("%s", categoria);
  return 0;
}
