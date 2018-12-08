#include <stdio.h>
int main()
{
  int numero, i, j,contador;
  int a[10][10];
  printf("Ingresar el tamaño de la matriz: ");
  scanf("%d",&numero);
//Asignamos valores
  contador = 1;
  for (i = 1; i<= numero; i++) {
    for(j = 1; j <= numero; j++){
      a[i][j]= contador;
      contador++;
    }
  }
//Fin de Asignamos valores
//Inicia matriz inicial
printf("Matriz inicial:\n");
for (i = 1; i<= numero; i++) {
  for(j = 1; j <= numero; j++){
    printf("[%d][%d] => %d || ",i,j,a[i][j] );
  }
  printf("\n");
}
//Fin matriz inicial
//Inicia cambio
  for(i=1; i<= numero; i++) {
    a[i][0]= a[i][numero];
  }
//Fin cambio
//Inicia matriz final
printf("Matriz final:\n");
  for (i = 1; i<=numero; i++) {
    for(j = 0; j <numero; j++){
      printf("[%d][%d] => %d || ",i,j,a[i][j] );
    }
    printf("\n");
  }
//Fin de matriz final
  return 0;
}
