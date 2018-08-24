#include <stdio_ext.h>
#include <stdlib.h>

int main()
{
    int number[4];
    int i;
    int accumulator = 0;
    float result;

    for(i=0; i<5; i++) {

        printf("\n Ingrese su numero \n");


         while(scanf("%d", &number[i]) != 1) {

            printf("\nError - Numero %d:", i+1);
            __fpurge(stdin); //fflush(stdin)
        }

        accumulator= accumulator+number[i];

    }

    result= (float)accumulator / 5;
    printf("El promedio final es: %.2f", result);

    return 0;
}
