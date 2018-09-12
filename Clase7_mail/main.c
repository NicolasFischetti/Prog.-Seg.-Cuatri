#include <stdio_ext.h>
#include <stdlib.h>
#define CANTIDAD 20

int esEmail(char str[]);
int ingreseNombre(char Str[]);
int esSoloLetras(char str[]);

int main()
{
    char nombre[CANTIDAD];

    ingreseNombre(nombre);

    return 0;
}

int ingreseNombre(char Str[]) {

    char nombre[20];

    printf("Ingrese un nombre: %s \n", nombre);
    scanf("%s", nombre);
    __fpurge(stdin);

    if(esSoloLetras(nombre)) {

       printf("Su nombre es:\n %s", nombre);
       scanf("%s", nombre);
       return 1;

    } else {

        printf("Su nombre es incorrecto");
        return -1;
    }
    return 0;

}


int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


int esEmail(char str[])
{
   int i=0;

   while(str[i] != '\0')
   {
       if((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9') && (str[i] !='@') && (str[i] != '.'))
           return 0;
       i++;
   }
   return 1;
}
