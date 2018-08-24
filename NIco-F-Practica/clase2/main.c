#include <stdio_ext.h>
#include <stdlib.h>
#define LIMITE_ARRAY 3

int main()
{
    int numberOne;
    int numberTwo;
    int numberThree;
    int numberMax;
    int numberMIn;
    int number[LIMITE_ARRAY];
    int i;

    for(i=0; i < LIMITE_ARRAY; i++) {

        printf("\n NUmero: %d \n", i+1);

        while(scanf("%d", &number[i]) != 1)
        {
            printf("\nError - Numero %d:", i+1);
            __fpurge(stdin); //fflush(stdin)

        }
            if(i==0)
            {
                numberMax = number[i];
                numberMIn = number[i];
            }
            else if(number[i] > numberMax)
            {
                numberMax = number[i];
            }
            else if(number[i] < numberMIn)
             {
                numberMIn = number[i];
            }

    }

    printf("\nMax: %d - Min: %d", numberMax, numberMIn);

    for(i=0; i < LIMITE_ARRAY; i++)
    {
        if(number[i] > numberMIn && number[i] < numberMax){

        printf("\nEs el del medio %d", number[i]);
        break;

        }

    }
    /*

    printf("\nIngrese el primer numero:");

     numberMax = numberOne;
    numberMIn = numberOne;


    while(scanf("%d", &numberOne) != 1)
    {
        printf("Error - Numero 1:");
        __fpurge(stdin); //fflush(stdin)

    }

    printf("\nIngrese el segundo numero:");


    while(scanf("%d", &numberTwo) != 1)
    {
        printf("Error - Numero 2:");
        __fpurge(stdin); //fflush(stdin)

    }

    if(numberTwo > numberMax)

    {
        numberMax = numberTwo;
     }

     else if (numberTwo < numberMIn)

    {
        numberMIn = numberTwo;
     }

     printf("\nIngrese el tercer numero:");

    while(scanf("%d", &numberThree) != 1)
    {
        printf("Error - Numero 3:");
        __fpurge(stdin); //fflush(stdin)

    }

    if(numberThree > numberMax)

    {
        numberMax = numberThree;
     }

     else if (numberThree < numberMIn)

    {
        numberMIn = numberThree;
     }

    printf("\n Max: %d - Min: %d", numberMax, numberMIn);

    if (numberOne < numberMax && numberOne > numberMIn) {

        printf("El numero del medio es %d", numberOne);
    }

    else if (numberTwo < numberMax && numberTwo > numberMIn) {

        printf("El numero del medio es %d", numberTwo);
    }

    else if (numberThree < numberMax && numberThree > numberMIn) {

        printf("\n El numero del medio es %d", numberThree);
    }*/

    return 0;
}
