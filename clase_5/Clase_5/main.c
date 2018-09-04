#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 10



int main()
{

    int noteList[QUANTITY];
    int newNumber;
    int i;
    int numberMax;
    int numberMin;
    int acumulator = 0;
    int average;


    /*
    printf("tamaño: %d",sizeof(noteList)); //size of determina el tamaño de la variable en bytes
    printf("tamaño: %d",sizeof(newNumber));
    printf("direccion: %d", &newNumber);
    printf("direccion: %d", noteList); // la direccion de memoria de la variable
    printf("direccion: %d", noteList[0]);*/

    for(i=0;i<QUANTITY;i++) {

        printf("\n Ingrese nota %d: ", i+1);
        scanf("%d", &newNumber);
        newNumber = noteList[i];
        }

        for(i=0;i<QUANTITY;i++ )
        {
            printf("\n Sus notas son %d: ", noteList[i]);
        }


         for(i=0;i<QUANTITY;i++ ) {

            if(i==0 || noteList[i] > numberMax) {

                numberMax=noteList[i];

            }
        }

        for(i=0;i<QUANTITY;i++ ) {

            if(i==0 || noteList[i] < numberMin) {

                numberMin= noteList[i];
            }

        }

        for(i=0;i<QUANTITY;i++) {

            acumulator=acumulator+noteList[i];


        }

        average=acumulator/QUANTITY;


        printf("\n El numero mayor es: %d - El numero minimo es: %d \n - Su suma de notas es: %d - El promedio es: %d", numberMax, numberMin, acumulator, average);


        return 0;
}


