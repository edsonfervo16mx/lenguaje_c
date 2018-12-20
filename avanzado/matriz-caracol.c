#include <stdio.h>
int main()
{
  int numero,contador,f,c,i,j,sf,sc,piv,gen;
  int arreglo[10][10];
  f=5;
  c=4;
  sf=1;
  sc=0;
  piv=1;
  gen=0;
  printf("Ingrese un numero\n");
  scanf("%d",&numero);
  contador = 0;
  while (contador <= 10) {
    //printf("%d\n", contador);
    for (i = 1; i < piv; i++) {
      printf("f [%d][%d]: %d\n",f,c, gen);
      arreglo[f][c] = gen;
      gen++;
      if (gen == numero) {
        goto salida;
      }
      if (sf == 0) {
        f--;
      }else{
        f++;
      }
    }
    if (sf == 0) {
      sf = 1;
    }else{
      sf = 0;
    }
    for (i = 1; i < piv; i++) {
      printf("c [%d][%d] : %d\n",f,c, gen);
      arreglo[f][c] = gen;
      gen++;
      if (gen == numero) {
        goto salida;
      }
      if (sc == 0) {
        c--;
      }else{
        c++;
      }
    }
    if (sc == 0) {
      sc = 1;
    }else{
      sc = 0;
    }
    piv++;
    contador++;

  }
salida: ;
printf("%d\n",contador);
printf("%d\n",piv);
for (i = 0; i < 10; i++) {
  for (j = 0; j < 10; j++) {
    printf("||[%d][%d] %d",i,j,arreglo[i][j] );
  }
    printf("\n");
}
  return 0;
}
