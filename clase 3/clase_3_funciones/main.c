#include <stdio_ext.h>
#include <stdlib.h>

/*Si no le paso el prototipo el compilador toma por default que los que pasa por los parametros es un int*/
/* Memoria stack(zona) donde se guardan los datos. Las funciones ocupan parte de la memoria, ESPACIO RESERVADO. Ccuando es llamada empieza a acupar momemoria */
/* los parametros de la funcion son variables de la funcion*/
/*Las funciones solo puede acceder al lugar de su satck (su espacio) no puede acceder a una  variable*/
/* varible local arriba del main, puede accdeder tosdos los archivos" */
/*Las variables locales dentro de la funion duran lo que dura la funcion*/
/* Existen variables que quedan vivas desdepues que la variable se ejecuta, esta variable no forma parte de ese stack memoria. SIempre conserva su posicion de memoria*/
/*Si hay una variable local con el mismo nombre en el main y una funcion, y el primero llama a esta funcion segunda funcion, cada variable actuan separadas porque ocupan un
lugar dentro del stack propio.
/* La varible local tiene mas peso sobre lo global*/



int validationAge(int age, int max, int min);
int getAge();

int main()
{
    /*int edad;
    int* pEdad;
    edad = 5;
    pEdad = &edad;
    *pEdad = 8;

    printf("%d", edad);
    printf("%d", *pEdad);*/

    int age;
    int validationGetAge;


        age= getAge();
        validationGetAge= validationAge(age,1,100);

        printf("Su edad es: %d", age);



}

int getAge()  {

    int age;
    int returnAge;

    printf("Ingrese su edad:");
    scanf("%d", &age);
    returnAge= validationAge(age,1,100);


}

int validationAge(int age, int min, int max) {

    int counter = 0;

    while(age < min || age > max) {

    counter++;
    if(counter == 2) {
        break;
      }
     printf("Ingrese su edad nuevamente");
     scanf("%d", &age);

    }
    if(counter == 2) {
        age = -1;
      }
    return age;
}









