#include <stdio.h>
#include <stdlib.h>

int* new_array(int size);
int init_array(int* arrayInt, int limite, int valor);
int show_array(int* arrayInt, int limite);
int deleteArray(int* arrayInt);


int main()
{
    int* arrayEnteros;
    arrayEnteros = new_array(100);
    init_array(arrayEnteros,100, 1024);
    show_array(arrayEnteros,100);
    deleteArray(arrayEnteros);

    return 0;
}

int* new_array(int size)
{
    int* retorno = NULL;
    int* auxiliarInt;
    if(size > 0)
    {
        auxiliarInt =(int*) malloc(sizeof(int)*size);

        if(auxiliarInt != NULL)
        {
            retorno = auxiliarInt;

        }
    }

    return retorno;
}

int init_array(int* arrayInt, int limite, int valor) {

    int retorno = -1;
    int i;

    if(limite > 0 && arrayInt != NULL)
    {
        for(i=0;i<limite;i++)
        {
            *(arrayInt+1) = valor;
        }

        retorno = 0;
    }

    return retorno;
}

int show_array(int* arrayInt, int limite) {

     int retorno = -1;
    int i;
    printf("\n ---> i %p", &i);
    if(limite > 0 && arrayInt != NULL)
    {
        for(i=0;i<limite;i++)
        {
            printf("\n%p - [%d] - %d\n",(arrayInt+1),i,*(arrayInt+1));
        }

        retorno = 0;
    }

    return retorno;

}

int deleteArray(int* arrayInt) {

    int retorno = -1;
    if(arrayInt != NULL) {
            free(arrayInt);
            retorno = 0;
    }

    return retorno;

}

int* reSizeArray (int* arrayInt, int size) {

    int* retorno = NULL;
    int* auxiliarInt;

    if(arrayInt != NULL && size > 0){

        retorno = (int*)realloc(arrayInt,sizeof(int) * size);
    }

    return retorno;
}
