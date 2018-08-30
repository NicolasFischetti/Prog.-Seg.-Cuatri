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

