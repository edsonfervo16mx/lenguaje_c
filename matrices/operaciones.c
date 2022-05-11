#include <stdio.h>

int main()
{
    int size_matriz, i, j, contador, opcion;
    float matrizA[10][10];
    float matrizB[10][10];
    float matrizC[10][10];
    do
    {
        // Menu
        printf("Seleccione una de las siguientes opciones: \n");
        printf("1. Ingresar matrices. \n");
        printf("2. Sumar. \n");
        printf("3. Restar. \n");
        printf("4. Multiplicar. \n");
        printf("5. Ver matrices ingresadas. \n");
        printf("6. Salir. \n");
        scanf("%d", &opcion);
        //
        switch (opcion)
        {
        case 1:
            // matrizA
            printf("Ingresar el tamaño de la matrizA: \n");
            scanf("%d", &size_matriz);
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("Ingresar A [%d][%d]: ", i, j);
                    scanf("%f", &matrizA[i][j]);
                }
            }
            // matrizB
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("Ingresar B [%d][%d]: ", i, j);
                    scanf("%f", &matrizB[i][j]);
                }
            }
            break;
        case 2:
            // Suma
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                }
            }
            // Imprimir Respuesta
            printf("--------------------\n");
            printf("RESULTADO DE LA SUMA: \n");
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("C [%d][%d]: [%f]\n", i, j, matrizC[i][j]);
                }
            }
            printf("--------------------\n");
            break;
        case 3:
            // Resta
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
                }
            }
            // Imprimir Respuesta
            printf("--------------------\n");
            printf("RESULTADO LA RESTA: \n");
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("C [%d][%d]: [%f]\n", i, j, matrizC[i][j]);
                }
            }
            printf("--------------------\n");
            break;
        case 4:
            // Multiplicar
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
                }
            }
            // Imprimir Respuesta
            printf("--------------------\n");
            printf("RESULTADO LA MULTIPLICACION: \n");
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("C [%d][%d]: [%f]\n", i, j, matrizC[i][j]);
                }
            }
            printf("--------------------\n");
            break;
        case 5:
            printf("MATRICES INGRESADAS: \n");
            // Imprimir A
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("A [%d][%d]: [%f]\n", i, j, matrizA[i][j]);
                }
            }

            // Imprimir B
            for (i = 1; i <= size_matriz; i++)
            {
                for (j = 1; j <= size_matriz; j++)
                {
                    printf("B [%d][%d]: [%f]\n", i, j, matrizA[i][j]);
                }
            }
            break;
        default:
            break;
        }
    } while (opcion != 6);

    return 0;
}