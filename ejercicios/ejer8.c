#include <stdio.h>
int main()
{
  /*
  En el Instituto Superior Pedagógico Toribio Rodríguez de Mendoza, los pagos por
  curso desaprobado son de 20 soles, con un cargo máximo de 120 soles
  independiente del número de cursos tomados. Ejemplo si un alumno desaprueba 3
  cursos pagaría 60 soles, mientras que uno que desaprueba 8 cursos paga 120 soles.
  Escriba un programa en el que las entradas sean el número de
  cursos desaprobados y la salida sea el valor del pago total que el alumno haga por
  los cursos desaprobados.
  */
  #define CARGOMAXIMO 120
  #define COSTOCURSO 20
  int ncursos,montopago;
  printf("Ingresar el numero de cursos\n");
  scanf("%d", &ncursos);
  if((COSTOCURSO*ncursos) >= CARGOMAXIMO){
    printf("El monto a pagar es: %d\n", CARGOMAXIMO);
  }else{
    printf("El monto a pagar es: %d\n", COSTOCURSO*ncursos);
  }
  return 0;
}
