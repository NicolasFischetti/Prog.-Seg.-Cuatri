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

Determinaci�n del valor a retornar: Finalmente resta definir cual ser� el tipo de
dato que retorna la funci�n. Al igual que en el punto anterior el valor a retornar va
�ntimamente relacionado con la tarea que realice la funci�n.
? El dato a buscar se lo paso a la funci�n
? El dato a buscar lo lee la funci�n

Recursividad es el proceso de definir algo en t�rminos de s� mismo. B�sicamente un problema
podr� ser resuelto en forma recursiva si la soluci�n se puede expresar en t�rminos de s�
misma, para obtener la soluci�n deber� resolverse el mismo problema sobre un conjunto de
datos de entrada menor.
Se dice que una funci�n es recursiva cuando se llama a s� misma. El lenguaje C soporta
funciones recursivasEn la funci�n se ve claramente que se vuelve a llamar a s� misma.
Hay que tener muy presente que cada vez que la funci�n se llama a s� misma, se est�
utilizando memoria en la pila del programa , que en alg�n momento se debe liberar. Es decir
que en alg�n momento la funci�n debe comenzar a retornar.

