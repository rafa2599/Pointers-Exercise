# Pointers-Exercise
Repository with pointer Exercies in C++ 

## 1. Declaración del Puntero

Para declarar un puntero, se utiliza el asterisco (*).

**int *ip;**

- Interpretación: El asterisco indica que ip es un puntero a un entero.
- Semántica: La expresión *ip se resolverá a un tipo int, mientras que ip almacena una dirección de memoria.

## 2. Inicialización (Asignación de Dirección)

Un puntero debe apuntar a una dirección de memoria válida. Utilizamos el operador & (address-of) para obtener la dirección de una variable existente.

- int i = 5;  // Variable entera

- ip = &i;    // 'ip' ahora contiene la dirección de memoria de 'i'

- &i: Obtiene la dirección de i.

- Resultado: ip apunta a i. Visualmente, es una flecha desde ip hacia la caja de valor de i.

## 3. Manipulación (Operador de Contenido *)

Una vez inicializado, usamos el operador * (desreferencia) para acceder al valor almacenado en esa dirección.
Leer el valor

**printf("%d\n", *ip); // Imprime 5 (el valor de 'i')**

Para modificar el valor podemos cambiar el valor de la variable original a través del puntero:
***ip = 7; // Resultado: La variable 'i' ahora vale 7.** 

## 4. Diferencia: Cambiar Valor vs. Cambiar Puntero

Es crítico distinguir entre modificar el contenido apuntado y cambiar la dirección del puntero.

- Caso A: Modificar el valor de la variable a través del puntero (*ip)

    **"*ip = 7;"** 
    
- Caso B: Modificar la dirección del puntero (ip)

    **int j = 3;**

    **ip = &j;**

    

## 5. Copia de Punteros

Es posible asignar un puntero a otro:

- **int *ip2;**

- **ip2 = ip; // ip2 apunta a donde apunta ip1**


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

## Tabla: Declaración vs. Retorno

int *copiax2(int *x, int N){  
    -int co[4];

    -//static int co[4];

    -//int *co=(int *)malloc(sizeof(int)*4); 

    -//int *co= new int[4];

    -for (int i=0;i<4;i++) {

        -co[i]=*(x+i)*2;
    }
    
    -return co;
}

| **Parte del Código** | **Código** | **¿Qué significa aquí?** | **Tipo de Dato** |
|---|---:|---|---|
| Cabecera (La Promesa) | `int *copiax2(...)` | Declaración de tipo: esta función promete devolver una **dirección de memoria**. | **`int *`** (puntero a `int`) |
| Cuerpo (La Variable) | `co` | El puntero: es la **variable que guarda la dirección**. En arrays, el nombre actúa como puntero. | **`int *`** (variable puntero) |
| Retorno Correcto | `return co;` | Entregar: devuelves la variable tal cual; como `co` es una **dirección**, cumple la promesa de la cabecera. | **`int *`** (dirección) |
| Retorno Incorrecto | `return *co;` | Desreferenciar (acción): `*` es un operador que **viaja a la dirección y trae el valor**. | **`int`** (valor) |

## Tabla: operador . vs operador ->

| **Característica**   | **Operador Punto (.)**                                                                 | **Operador Flecha (->)**                                                                 |
|------------------|-------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------|
| ¿Cuándo se usa?  | Cuando tienes la instancia (la variable directa) de la estructura.                  | Cuando tienes un puntero (la dirección de memoria) que apunta a la estructura.        |
| Tipo de dato     | `struct persona p1;`                                                               | `struct persona *pp1;`                                                               |
| Acción interna   | Accede directamente al miembro dentro de la variable.                              | 1. Viaja a la dirección de memoria.<br>2. Accede al miembro.                          |
| Ejemplo (Tu código) | `p1.dni = 12445099;`                                                               | `pp1->dni = 10998760;`                                                               |
| Analogía         | Estás parado dentro de la casa y abres la puerta.                                  | "Tienes un papel con la dirección de la casa. Primero vas a la casa, y luego abres la puerta." |
