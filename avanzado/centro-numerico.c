#include <stdio.h>
int main()
{
  int numero,izq,pivote,der,fin,ini,contador;
  printf("Ingresar un valor: ");
  scanf("%d",&numero);
  contador = numero;
  ini = 1;
  fin = numero;
  izq = 0;
  der = 0;
  pivote = ini;
  while(contador > 0){
    izq = 0;
    der = 0;
    for (int i = 0; i< pivote;i++) {
      izq = izq + i;
    }
    for(int j = numero; j > pivote; j--){
      der = der + j;
    }
    if(der != izq){
      pivote = ini;
      ini++;
    }
    contador--;
  }
  if (der != izq) {
    printf("No tiene centro numerico\n");
  }else{
    printf("Su centro numerico es: %d\n",pivote);
  }
  //printf("%d\n",izq);
  //printf("%d\n",der);
  //printf("%d\n",pivote);
  return 0;
}
