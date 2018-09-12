#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char password[9];
    char user[6];
    char auxPassword[]="admin\n";
    char auxUser[]="admin\n";
    printf("usuario:");
    fgets(user,16,stdin);
    __fpurge(stdin);
    fgets(password,9,stdin);
    __fpurge(stdin);

    int otherAux = strlen(user);

    printf("Tamanio %d", otherAux);

    printf("c:%s" "u:%s", password, user);
    int retorno;
    retorno =strcmp(user, password);
    printf("retorno %d", retorno);

    //if(strcmp(user, "admin\n")==0)
    if(strcmp(user, auxUser)==0 && strcmp(password, auxPassword) ==0)
    {

        printf("Ingreso!!!");


    } else {

        printf("noooo");
    }

/*
    char name[10];
    char surname[10];
    char direction[10];
    int size;*/
/*
    size= sizeof(name);
    printf("Ingrese su nombre: %d", size);
    scanf("%s", name);

    printf("el nombre ingresado es: %s", name);
    scanf("%s", name);

     size= sizeof(name);
    printf("Ingrese su nombre: %d", size);

    printf("el nombre ingresado es: %s y usted es ...", name);
    */

    /*fgets(name,10,stdin);
    __fpurge(stdin);
    fgets(surname,10,stdin);
    __fpurge(stdin);
    fgets(direction,10,stdin);
    __fpurge(stdin); */


    return 0;
}
