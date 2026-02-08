# Pointers-Exercise
Repository with pointer Exercies in C++ 

1. Declaración del Puntero

Para declarar un puntero, se utiliza el asterisco (*).
C

int *ip;

    Interpretación: El asterisco indica que ip es un puntero a un entero.

    Semántica: La expresión *ip se resolverá a un tipo int, mientras que ip almacena una dirección de memoria.

2. Inicialización (Asignación de Dirección)

Un puntero debe apuntar a una dirección de memoria válida. Utilizamos el operador & (address-of) para obtener la dirección de una variable existente.
C

int i = 5;  // Variable entera
ip = &i;    // 'ip' ahora contiene la dirección de memoria de 'i'

    &i: Obtiene la dirección de i.

    Resultado: ip apunta a i. Visualmente, es una flecha desde ip hacia la caja de valor de i.

3. Manipulación (Operador de Contenido *)

Una vez inicializado, usamos el operador * (contents-of o desreferencia) para acceder al valor almacenado en esa dirección.
Leer el valor
C

printf("%d\n", *ip); // Imprime 5 (el valor de 'i')

Modificar el valor

Podemos cambiar el valor de la variable original a través del puntero:
C

*ip = 7; 
// Resultado: La variable 'i' ahora vale 7.

4. Diferencia: Cambiar Valor vs. Cambiar Puntero

Es crítico distinguir entre modificar el contenido apuntado y cambiar la dirección del puntero.

    Caso A: Modificar el valor (*ip)
    C

    *ip = 7; 

    La flecha no se mueve. ip sigue apuntando a i, pero el valor dentro de i cambia.

    Caso B: Modificar el puntero (ip)
    C

    int j = 3;
    ip = &j;

    La flecha se mueve. ip deja de apuntar a i y ahora apunta a j. El valor de i permanece intacto.

5. Copia de Punteros

Es posible asignar un puntero a otro:
C

int *ip2;
ip2 = ip;

    Comportamiento: Esto copia la dirección de memoria (la flecha), no el valor entero.

    Resultado: Tanto ip como ip2 apuntan exactamente a la misma ubicación de memoria.
## 📊 Equivalencias y diferencias entre punteros y arrays en C++ 

### Supongamos:  cpp int v[2] = {1,2};  int *px = v;

| Expresión                  | ¿Equivalente? | Explicación                                                                 |
|-----------------------------|---------------|-----------------------------------------------------------------------------|
| `int *px = v;` vs `px = &v[0];` | ✅ Sí        | El nombre del array `v` decae a un puntero al primer elemento (`&v[0]`). Ambas formas hacen que `px` apunte a `v[0]`. |
| `v[i]` vs `*(v+i)`          | ✅ Sí        | La notación de array `v[i]` es azúcar sintáctico para `*(v+i)`. Acceden al mismo valor. |
| `*px++` vs `*(++px)`        | ❌ No        | La precedencia importa: <br>• `*px++`: Devuelve el valor apuntado, luego incrementa el puntero. <br>• `*(++px)`: Primero incrementa el puntero, luego devuelve el valor. |
| `px++` vs `px = px+1`       | ✅ Sí        | Ambas avanzan el puntero una posición en memoria (al siguiente `int`). La diferencia es solo sintaxis. |
| `px + 5` vs `px = px+5`     | ❌ No        | • `px + 5`: Calcula una dirección desplazada 5 posiciones, pero no cambia `px`. <br>• `px = px+5`: Modifica `px` para que apunte 5 posiciones más adelante. |
| `&v[i]` vs `(v+i)`          | ✅ Sí        | La dirección del elemento `v[i]` es exactamente `v+i`. Ejemplo: `&v[1] == v+1`. |
| `*(px+i)` vs `px[i]`        | ✅ Sí        | Igual que con `v`, la notación de array sobre un puntero es azúcar sintáctico para aritmética de punteros. |
| `*++px` vs `++*px`          | ❌ No        | • `*++px`: Mueve el puntero al siguiente elemento y devuelve ese valor. <br>• `++*px`: Incrementa el valor apuntado por `px`, no el puntero. |

