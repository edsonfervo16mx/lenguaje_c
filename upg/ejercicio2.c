#include <stdio.h>
int main()
{
  #define ANIOACTUAL 2018
  #define MESACTUAL 12
  #define DIAACTUAL 13
  char nombre[50];
  int dia, mes, anio, edad;
  printf("Ingresar su nombre\n");
  scanf("%s",nombre );
  printf("Ingresar dia de nacimiento\n");
  scanf("%d",&dia );
  printf("Ingresar mes de nacimiento\n");
  scanf("%d",&mes );
  printf("Ingresar año de nacimiento\n");
  scanf("%d",&anio );

  if (MESACTUAL >= mes && DIAACTUAL >= dia) {
    edad = ANIOACTUAL - anio;
  }else{
    edad = ANIOACTUAL - anio -1;
  }
  printf("Hola %s\n",nombre );
  printf("Tu edad es %d\n",edad );

  return 0;
}
