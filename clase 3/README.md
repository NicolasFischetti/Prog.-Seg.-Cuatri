# Prog.-Seg.-Cuatri

/*Si no le paso el prototipo el compilador toma por default que los que pasa por los parametros es un int*/
/* Memoria stack(zona) donde se guardan los datos. Las funciones ocupan parte de la memoria, ESPACIO RESERVADO. Cuando es llamada empieza a acupar momemoria */
/* los parametros de la funcion son variables de la funcion*/ 
/*Las funciones solo puede acceder al lugar de su satck (su espacio) no puede acceder a una  variable*/
/* varible local arriba del main, puede accdeder tosdos los archivos" */ 
/*Las variables locales dentro de la funion duran lo que dura la funcion*/
/* Existen variables que quedan vivas desdepues que la variable se ejecuta, esta variable no forma parte de ese stack memoria. SIempre conserva su posicion de memoria*/
/*Si hay una variable local con el mismo nombre en el main y una funcion, y el primero llama a esta funcion segunda funcion, cada variable actuan separadas porque ocupan un
lugar dentro del stack propio.
/* La varible local tiene mas peso sobre lo global*/
/* scanf devuelve 1 , si se equivoca el usurio devuelve 0*/
/* scanf no obtiene lo que le dijimos no toca el valor, queda el que estaba , no lo conocemos(basura) */
/*  scanf en las variables no sabes que lugar ocupa*/
/* Pasaje por referecia le paso la direccion de memoria ( puntero)
/* Pasaje por valor (le paso el valor)
/* le agrego el * al parametro y p a la variable para saber que es un puntero
/* * para el valor
/* & posicion de memoria

Determinación del valor a retornar: Finalmente resta definir cual será el tipo de
dato que retorna la función. Al igual que en el punto anterior el valor a retornar va
íntimamente relacionado con la tarea que realice la función.
? El dato a buscar se lo paso a la función
? El dato a buscar lo lee la función

Recursividad es el proceso de definir algo en términos de sí mismo. Básicamente un problema
podrá ser resuelto en forma recursiva si la solución se puede expresar en términos de sí
misma, para obtener la solución deberá resolverse el mismo problema sobre un conjunto de
datos de entrada menor.
Se dice que una función es recursiva cuando se llama a sí misma. El lenguaje C soporta
funciones recursivasEn la función se ve claramente que se vuelve a llamar a sí misma.
Hay que tener muy presente que cada vez que la función se llama a sí misma, se está
utilizando memoria en la pila del programa , que en algún momento se debe liberar. Es decir
que en algún momento la función debe comenzar a retornar.

ARRAY

Un vector o array es un conjunto de elementos del mismo tipo (enteros, flotantes, caracteres)
que se agrupan bajo un mismo nombre y se diferencian entre sí por un índice.
Donde tipo es el tipo de dato, por ejemplo int, float, char, etc.
“nombre” es el nombre del vector y “cantidad” es la cantidad de elementos que contiene el
vector.
Para llenar un vector con valores (cargar), existen 2 formas que son la secuencial y la
aleatoria.
En la carga secuencial se carga el vector ordenadamente, es decir el primero después el
segundo, el tercero y así hasta llegar al último.
En la carga aleatoria no existe un orden establecido, por lo tanto se debe informar el número a
cargar y en que posición del vector se carga.
Para encontrar el mayor elemento dentro de un vector lo primero que hacemos es tomar uno
cualquiera de los elementos del mismo y suponer que es el mayor. Luego comparando cada
elemento del vector contra el valor de la variable mayor, que es actualizado mientras se
recorre el vector , se llega al final del vector con el mayor elemento guardado en la variable
mayor

 Búsqueda del mayor
//buscar mayor
mayor=vec[0];
for(i=0;i<MAX;i++)
{
if(vec[i]>mayor)
{
mayor=vec[i];
/* otras asignaciones */
}
} 

Búsqueda del menor
//buscar menor
menor=vec[0];
for(i=0;i<MAX;i++)
{
if(vec[i]<menor)
{
menor=vec[i];
/* otras asignaciones */
}
}

Búsqueda de un número dentro del vector
 //buscar un numero dentro del vector
flag=0;
printf("Ingrese numero a buscar");
scanf("%d",&num);
for(i=0;i<MAX;i++)
{
if(num==vec[i])
{
/* asignaciones y modificaciones */
printf("Se encontro el numero");
flag=1;
}
}
if(flag==0)
printf("El numero no se encontro");
Para buscar un número dentro de un vector, lo debemos recorrer y preguntar si el elemento
del vector es igual al número ingresado.
De acuerdo a esto surge que para recorrer el vector debemos colocar un for y dentro del
mismo un if para preguntar por la igualdad.

El problema a resolver es cómo se da cuenta el programa que el número no está en el vector.
La respuesta es EL PROGRAMA NO TIENE FORMA DE SABER QUE EL NÚMERO NO ESTA EN EL
VECTOR, pero si sabe cuando lo encuentra.
De acuerdo a esto podemos decir que si el programa nunca entro al if (despues de recorrer
todo el vector) significa que no lo encontró y entonces la solución es colocar una bandera
dentro del if. El código es el siguiente:
flag=0; // Supongo que el número no lo encuentro
printf("Ingrese numero a buscar");
scanf("%d",&num);
for(i=0;i<MAX;i++)
{
if(num==vec[i])
{
printf("Se encontro el numero");
flag=1; // si lo encontro, pongo el flag en 1
}
}
if(flag==0)
printf("El numero no se encontro");

