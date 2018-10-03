int informar_ConsultaFacturacion(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas, char* cuit);
int informar_ListarContrataciones(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas);


int informar_ListarCantidadContratacionesImporte(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas);

int informes_ordenar_pantalla_Nombre_Precio(Pantalla* array, int limite);
int pantallasMenoresIguales(Pantalla* array, int limite);
int pantallasMayoresDiez(Pantalla* array, int limite);
int promedioPantallas(Pantalla *array, int limite);
int informar_pantallasSuperandoPromedioPrecio(Pantalla* pantallas, int lenpantallas);
