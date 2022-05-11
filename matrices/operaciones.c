#include <stdio.h>

int main()
{
    int size_matriz = 0, i, j, k, contador, opcion, aux;
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
            for (i = 0; i < size_matriz; i++)
            {
                for (j = 0; j < size_matriz; j++)
                {
                    printf("Ingresar A [%d][%d]: ", i, j);
                    scanf("%f", &matrizA[i][j]);
                }
            }
            // matrizB
            for (i = 0; i < size_matriz; i++)
            {
                for (j = 0; j < size_matriz; j++)
                {
                    printf("Ingresar B [%d][%d]: ", i, j);
                    scanf("%f", &matrizB[i][j]);
                }
            }
            break;
        case 2:
            if (size_matriz > 0)
            {
                // Suma
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
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
            }
            else
            {
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                printf("No hay matrices ingresadas\n");
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
            }

            break;
        case 3:
            if (size_matriz > 0)
            {
                // Resta
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
                    {
                        matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
                    }
                }
                // Imprimir Respuesta
                printf("--------------------\n");
                printf("RESULTADO LA RESTA: \n");
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
                    {
                        printf("C [%d][%d]: [%f]\n", i, j, matrizC[i][j]);
                    }
                }
                printf("--------------------\n");
            }
            else
            {
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                printf("No hay matrices ingresadas\n");
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
            }

            break;
        case 4:
            if (size_matriz > 0)
            {
                // Multiplicar
                for (i = 0; i < size_matriz; i++)
                { // se itera através de cada fila de matriz1
                    for (j = 0; j < size_matriz; j++)
                    {            // se itera através de cada columna de matriz2
                        aux = 0; // es donde se almacenará el valor final
                        for (k = 0; k < size_matriz; k++)
                        {
                            aux += matrizA[i][k] * matrizB[k][j]; // se acumula en suma
                        }
                        matrizC[i][j] = aux;
                    }
                }
                // Imprimir Respuesta
                printf("--------------------\n");
                printf("RESULTADO LA MULTIPLICACION: \n");
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
                    {
                        printf("C [%d][%d]: [%f]\n", i, j, matrizC[i][j]);
                    }
                }
                printf("--------------------\n");
            }
            else
            {
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                printf("No hay matrices ingresadas\n");
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
            }

            break;
        case 5:
            if (size_matriz > 0)
            {
                printf("MATRICES INGRESADAS: \n");
                // Imprimir A
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
                    {
                        printf("A [%d][%d]: [%f]\n", i, j, matrizA[i][j]);
                    }
                }

                // Imprimir B
                for (i = 0; i < size_matriz; i++)
                {
                    for (j = 0; j < size_matriz; j++)
                    {
                        printf("B [%d][%d]: [%f]\n", i, j, matrizB[i][j]);
                    }
                }
            }
            else
            {
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                printf("No hay matrices ingresadas\n");
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
            }

            break;
        default:
            break;
        }
    } while (opcion != 6);

    return 0;
}