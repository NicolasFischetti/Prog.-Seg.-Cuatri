# Prog.-Seg.-Cuatri

Clase 5 , 6 y 7

Una cadena de caracteres es una palabra o frase (un texto cualquiera). Todos los lenguajes de
programación necesariamente deben poder trabajar con este tipo de datos. Puesto que en C
no existe un tipo de dato “string” o “cadena” que nos permita almacenar más de una letra, lo
que se hace es guardar la frase o palabra en un vector de caracteres.

En el lenguaje C las cadenas se representan como una secuencia de letras terminadas en un
CERO (0 o ASCII ‘\0’), por lo tanto si ingresamos la palabra “hola” en el vector se cargará lo
siguiente

La función “scanf” permite realizar el ingreso de datos según el formato que se le indique en
uno de sus parámetros.
Para el uso con cadenas de caracteres se deberá usar %s

Los dos argumentos de la función son:
1. “%s” : Indica que lo que se ingrese sea interpretado como cadena de caracteres
2. “vec” : Dirección de comienzo del vector donde se va a guardar la palabra (nombre del
vector sin usar “&”). No se puede usar los espacios, ya que corta el ingreso de datos.

1.2.2 GETS (GET String)
La función gets permite leer desde el teclado cadenas de caracteres.
gets (vec);
El argumento es la dirección de comienzo del vector donde se va a guardar la palabra.
La función lee los caracteres que se ingresan por teclado hasta que se presiona un enter. Lo
que se leyó lo guarda a partir de la dirección indicada por vec y coloca el terminador nulo en
lugar del enter.

La función strcmp sirve para comparar cadenas de caracteres.
int strcmp ( cad1 , cad2 )
• 1er argumento: Dirección de comienzo del vector donde esta la otra palabra a comparar
• 2do argumento: Dirección de comienzo del vector donde esta una de las palabras a
comparar
Como resultado de la comparación la función devuelve un valor entero que se interpreta de la
siguiente manera
• Si devuelve menor a cero significa que la palabra en cad1 es menor que que la palabra
en cad2
• Si devuelve cero significa que que la palabra en cad1 es la misma que que la palabra en
cad2
• Si devuelve mayor a cero significa que la palabra en cad1 es mayor que que la palabra
en cad2
Si se quiere comparar sin importar mayúscula o minúscula se debe usar stricmp.

STRCPY (STRing CoPY)
La función strcpy sirve para copiar una cadena de caracteres desde un lugar a otro , es decir
desde un origen a un destino.
strcpy ( destino , origen )
• 1er argumento: Dirección de comienzo del vector donde se van a guardar los datos
• 2do argumento: Dirección de comienzo del vector que tiene los datos a copiar
La función copia la cadena de caracteres que se encuentra guardada en un vector (cuya
dirección de comienzo es origen ) hacia otro vector (cuya dirección de comienzo es destino).
Ejemplo: Cargar una palabra en una cadena, copiarla a otra cadena auxiliar, e imprimir ambas.

STRLEN (STRing LENght)
La función strlen sirve para obtener la cantidad de letras que tiene una cadena de caracteres.
Esta función cuenta los caracteres hasta que llega al 0(terminador de cadena), es decir , si
ingresamos la siguiente cadena “Hola como estas” , la función devolvera 15 que es la cantidad
de caracteres que tiene la cadena (los espacios tambien son contados).
int strlen (vec)
El argumento de la función es la dirección de comienzo del vector que tiene los datos.
Ejemplo: Cargar un vector con una palabra y mostrar la cantidad de caracteres que tiene.

%p posicion de memoria
strlen te devuelve la cantidad de bits usados
fgets() funcion interna: puntero almacena la direcion de memoria, no le importa el array definido, si gets tiene 30 caracterres lee hasta los 30. Necesita tener el mismo tamaño del array.
__fpurge() #include <stdio_ext.h>

strcmp compara bytes. La suma del opuesto. 9 + - 7

Malloc espacio coniguo. NOs da una cantidad de byte. NO hay nada en le medio. Si devuelve puntero null salio mal, sino todo bien devuelve un puntero casting. Puedo administrar la memoria como quiero.
Free autoriza a malloc , le resta uno al puntero y se fija para otorgar un lugar.
Realloac te libera zona y recorre toda la zona de memoria hasta que encuentra espacio. No es performance. Le das un puntero previamente alocado por malloc. Devuelve null pero no te rompe lo demas(null), sino puede no puede, buscar la cantidad que se pide.
Free libera lo que dejo malloc libre.  

