#include <stdio.h>
int main()
{
  float n;
  printf("Ingresar un numero\n");
  scanf("%f", &n);
  if (n > 0) {
    printf("El numero: %.2f, es positivo. \n",n );
  }
  else if (n == 0) {
    printf("El numero: %.2f, es cero. \n",n );
  }else{
    printf("El numero: %.2f, es negativo. \n",n );
  }
  return 0;
}
