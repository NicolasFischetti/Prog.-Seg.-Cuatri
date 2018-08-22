#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numberOne;
   int numberTwo;
   int numberThree;
   int numberMin;
   int numberMax;

   printf("Ingrese el primer numero: ");
   scanf("%d", &numberOne);
   numberMin = numberOne;
   numberMax = numberOne;
   printf("Ingrese el segundo numero: ");
   scanf("%d", &numberTwo);
   printf("Ingrese el tercer numero: ");
   scanf("%d", &numberThree);

    if (numberTwo < numberThree && numberTwo > numberOne)||(numberThree < numberOne && numberThree > numberTwo)
    {
        printf("El numero es ingresado es: %d", numberTwo);
    }
    else if (numberThree < numberTwo && numberThree > numberOne)||(numberOne > numberTwo && numberOne < numberThree)
        {
            printf("El numero ingresado es: %d", numberThree);
        }

        else
        {
            printf("El numero ingresado es: %d", numberOne);
        }


    if (numberTwo < numberMin)
    {
        numberMin = numberTwo;

    } else if (numberTwo < numberMax){

        numberMax = numberTwo;
    }

    if (numberThree < numberMin)
    {
        numberMin = numberThree;
    }
    else if (numberThree > numberMax)
    {
        numberMax = numberThree;
    }

    if (numberOne > numberMin && numberOne < numberMax)
    {
        printf("El numero del medio es: %d", numberOne);
    }
    else if (numberTwo > numberMin && numberTwo < numberMax)
    {
        printf("El numero del medio es: %d", numberTwo);
    }
    else if (numberThree > numberMin && numberThree < numberMax)
    {
        printf("El numero del medio es: %d", numberThree);
    }
    else
    {
        printf("No hay numero en el medio");
    }

}


