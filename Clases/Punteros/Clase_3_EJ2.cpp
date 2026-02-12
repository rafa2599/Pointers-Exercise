
/*PUNTEROS A FUNCIONES*/

// DEITEL pagina 355 en adelante
// Programa de ordenamiento burbuja, multipropósito, mediante el uso de apuntadores a funciones.
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
// prototipos
void burbuja( int [],  int, bool (*)( int, int ) );
void intercambia( int * , int *  );   
bool ascendente( int, int );
bool descendente( int, int );

int main(int argc, char *argv[])
{  const int N = 10;
   int orden; 
   int i;
   int a[ N] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Introduzca 1 para ordenar de manera ascendente,\n" 
        << "Introduzca 2 para ordenar de manera descendente: ";
   cin >> orden;
   cout << "\nElementos de datos en el orden original\n";
   
   // muestra el arreglo original
   for ( i = 0; i < N; i++ )
      cout << setw( 4 ) << a[i];

   // ordena el arreglo en orden ascendente; pasa a la función ascendente
   // como un argumento para especificar el orden ascendente
   if ( orden == 1 ) {
      burbuja( a, N, ascendente );
      cout << "\nElementos de datos en orden ascendente\n";
   }

   // ordena el arreglo en orden descendente; pasa a la función descendente
   // como un argumento para especificar el orden descendente
   else {
      burbuja( a, N, descendente );
      cout << "\nElementos de datos en orden descendente\n";
   }

   // muestra arreglo ordenado
   for ( i = 0; i < N; i++ )
      cout << setw( 4 ) << a[i];

   cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

// ordenamiento burbuja multipropósito; el parámetro compara es un apuntador a
// la función de comparación que determina el tipo de ordenamiento
void burbuja( int v[], const int tamano, 
             bool (*compara)( int, int ) )
{
   // ciclo para controlar las pasadas
   for ( int i = 1; i < tamano; i++ )

      // ciclo para controlar el número de comparaciones por pasada
      for ( int j = 0; j < tamano - 1; j++ )

         // si los elementos adyacentes se encuentran en desorden, los intercambia
         if ( (*compara)( v[ j], v[ j + 1 ] ) )
            intercambia( &v[ j ], &v[ j + 1 ] );

} // fin de la función burbuja

// intercambia valores en localidades de memoria a los cuales 
// apuntan ptrElemento1 y ptrElement2
void intercambia( int *  ptrElemento1, int *  ptrElemento2 )
{
   int mantiene  = *ptrElemento1;
   *ptrElemento1 = *ptrElemento2;
   *ptrElemento2 = mantiene;

} // fin de la función intercambia

// determina si los elementos están en desorden 
// para un ordenamiento ascendente
bool ascendente( int a, int b )
{
   return b < a;   // intercambia si b es menor que a

} // fin de la función ascendente

// determina si los elementos están en desorden
// para un ordenamiento descendente
bool descendente( int a, int b )
{
   return b > a;   // intercambia si b es mayor que a

} // fin de la función descendente
