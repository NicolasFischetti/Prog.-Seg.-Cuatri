#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 10

void loadList(int note[], int longNote);
int returnTotal(int note[], int longList, int maxResult);
int returnAverage(int note[], int longNote, int aveResult);
void returnAverageInfo(int noteList[], int QUANTITY, int aveResult, int resultNumberMax);
void returnTotalInfo(int note[], int QUANTITY, int maxResultTotal);
int numberMax(int note[], int longNote, int resultNumberMax);


int main()
{

    int noteList[QUANTITY];

     loadList(noteList, QUANTITY);
    returnTotalInfo(noteList, QUANTITY, maxResultTotal);
    returnAverageInfo(noteList, QUANTITY, aveResult, resultNumberMax);

    /*
    printf("tamaño: %d",sizeof(noteList)); //size of determina el tamaño de la variable en bytes
    printf("tamaño: %d",sizeof(newNumber));
    printf("direccion: %d", &newNumber);
    printf("direccion: %d", noteList); // la direccion de memoria de la variable
    printf("direccion: %d", noteList[0]);*/


}

void returnAverageInfo(int noteList[], int QUANTITY, int aveResult, int resultNumberMax) {


    returnAverage(noteList[],QUANTITY, &aveResult, &resultNumberMax)
    printf("Su promedio es: %d", aveResult);
    printf("Su numero maximo es: %d", resultNumberMax);

}

void returnTotalInfo(int noteList, int QUANTITY, int maxResultTotal)
{
    returnTotal(noteList[], QUANTITY, &maxResultTotal)
    printf("El retorno total es: %d", maxResultTotal);

}

void loadList (int note[], int longNote) {

int i;
int newNumber;

for(i=0; i< longNote; i++) {


printf("\n Ingrese nota %d: ", i+1);
        scanf("%d", &newNumber);
        newNumber = longNote[i];

}

}



int returnTotal(int note[], int longList, int *maxResult) {

    int i;
    int acumulator = 0;

    for(i=0;i<longList;i++) {

           acumulator=acumulator+note[i];
            *maxResult = acumulator;

        }



    return 0;
}


int returnAverage(int note[], int longNote, int *aveResult) {

int sum;
int average;

sum= returnTotal(note, longNote);
average= sum/average;

*aveResult = average;

return 0;

}

int numberMax(int note[], int longNote, int *resultNumberMax) {

        int numberM;
        int i;

         for(i=0;i<longNote;i++ ) {

            if(i==0 || note[i] > numberM) {

                numberM=note[i];
                *resultNumberMax= numberM;
            }
        }



        return 0;

}

