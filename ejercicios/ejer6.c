#include <stdio.h>
int main()
{
  /*
  Hacer un programa que calcule el pago que hacen un grupo de
  personas para ver una película teniendo en cuenta que si el grupo es menor de 8
  personas el pago es de 1.5 soles por persona y para grupos de 8 personas o mas el
  pago es 0.5 soles por persona.
  */
  #define COSTONORMAL 1.5
  #define COSTODESCUENTO .5
  #define CANTIDADDESCUENTO 8
  float npersonas;
  printf("Ingresar el numero de personas:\n");
  scanf("%f", &npersonas);
  if(npersonas >= CANTIDADDESCUENTO){
    printf("Costo total: %f\n", npersonas * COSTODESCUENTO);
  }else{
    printf("Costo total: %f\n", npersonas * COSTONORMAL);
  }
  return 0;
}
