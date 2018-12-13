#include <stdio.h>
int main()
{
  int numero;
  printf("Ingresar un valor entero\n");
  scanf("%d",&numero );
  if (numero < 0) {
    printf("El numero %d es negativo\n", numero);
  }else{
    printf("El numero %d es positivo\n", numero);
  }
  return 0;
}
