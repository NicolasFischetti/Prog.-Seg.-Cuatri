#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Contratacion.h"
#include "utn.h"
#include "pantalla.h"


int informes_ordenar_pantalla_Nombre_Precio(Pantalla* array, int limite)
{
    int retorno = -1;
    int i;
    int flagSwap;
    Pantalla auxiliarEstructura;

    if(limite > 0 && array != NULL)
    {
        do
        {
            flagSwap = 0;
            for(i=0; i<limite-1; i++)
            {
                if(!array[i].isEmpty && !array[i+1].isEmpty)
                {

                    if((array[i].precio > array[i+1].precio))
                    {


                        auxiliarEstructura = array[i];
                        array[i] = array[i+1];
                        array[i+1] = auxiliarEstructura;
                        flagSwap = 1;

                    }

                    if(array[i].precio == array[i+1].precio && strcmp(array[i].nombre,array[i+1].nombre) < 0)

                    {
                        auxiliarEstructura = array[i];
                        array[i] = array[i+1];
                        array[i+1] = auxiliarEstructura;
                        flagSwap = 1;
                    }



                }

            }
        }
        while(flagSwap);
    }

    return retorno;
}

//B.  Todas las pantallas que su valor es menor o igual a 10.

int pantallasMenoresIguales(Pantalla* array, int limite)
{

    int i;
    int retorno = -1;

    if(limite > 0 && array != NULL)
    {

        for(i=0; i<limite-1; i++)
        {
            if (array[i].precio < 10 || array[i].precio == 10)
            {
                printf("\n El nombre del producto es: %s - El precio de la pantalla es: %.2f\n", array[i].nombre, array[i].precio);
            }
        }
    }
    return retorno;

}

int pantallasMayoresDiez(Pantalla* array, int limite)
{

    int i;
    int retorno = -1;

    if(limite > 0 && array != NULL)
    {

        for(i=0; i<limite-1; i++)
        {
            if (array[i].precio > 10)
            {
                printf("\n El nombre del producto es: %s - El precio de la pantalla es: %.2f\n", array[i].nombre, array[i].precio);
            }
        }
    }
    return retorno;

}

int promedioPantallas(Pantalla *array, int limite)
{

    double acumulator = 0;
    int i;
    int retorno = -1;
    double average;
    int pantallaMenorAlPromedio = 0;
    int pantallas = 0;

    if(limite > 0 && array != NULL)
    {
        retorno = 0;
        for(i=0; i < limite-1; i++)
        {
            pantallas++;

            if(array[i].isEmpty == 0)
            {
                acumulator = acumulator + array[i].precio;
                average = acumulator / pantallas;

                if (array[i].precio < average)
                {
                    pantallaMenorAlPromedio++;
                }
            }
        }
    }

    printf("\n La cantidad de pantallas menores al promedio es: %d", pantallaMenorAlPromedio);
    return retorno;
}




int informar_ConsultaFacturacion(Contratacion* arrayC,int limite,
                                 Pantalla* pantallas, int lenPantallas, char* cuit)
{
    int retorno = -1;

    return retorno;
}



int informar_ListarContrataciones(Contratacion* arrayC,int limite,
                                  Pantalla* pantallas, int lenPantallas)
{
    int retorno = -1;

    return retorno;
}


int informar_ListarCantidadContratacionesImporte(Contratacion* arrayC,int limite,
        Pantalla* pantallas, int lenPantallas)
{
    int retorno = -1;

    return retorno;
}

int informar_pantallasSuperandoPromedioPrecio(Pantalla* pantallas, int lenpantallas)
{
    int retorno=-1;
    int j;
    float averageSalary;

    if(pantallas != NULL && lenpantallas>0)
    {
        averageSalary=pantalla_promedioPrecio(pantallas,lenpantallas);
        if(averageSalary != -1)
        {
            printf("\n Employees with an above average salary:");
            printf("\n  Sector       Last name                Name                 Id        Salary\n");
            printf("---------------------------------------------------------------------------------\n");
            for(j=0; j<lenpantallas; j++)
            {
                if(pantallas[j].precio> averageSalary)
                {
                    printf("[RELEASE] - %d - %s - %.2f\n",pantallas[j].idPantalla, pantallas[j].nombre, pantallas[j].precio);
                }
            }
            retorno=1;
        }
    }
    return retorno;
}
