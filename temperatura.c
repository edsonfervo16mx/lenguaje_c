#include <stdio.h>
int main()
{
  #define CONST 1.8
  #define MIN -10
  #define MAX 100
  int contador = MIN;
  while(contador <= MAX){
    printf("%d °C == %f °F\n", contador, (CONST * contador));
    contador++;
  }
  return 0;
}
