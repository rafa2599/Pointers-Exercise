# Pointers-Exercise
Repository with pointer Exercies in C++ 

xpresión	¿Equivalente?	Explicación
int *px = v; vs px = &v[0];	✅ Sí	El nombre del array v decae a un puntero al primer elemento (&v[0]). Ambas formas hacen que px apunte a v[0].
v[i] vs *(v+i)	✅ Sí	La notación de array v[i] es azúcar sintáctico para *(v+i). Acceden al mismo valor. Ejemplo: v[1] == *(v+1) == 2.
*px++ vs *(++px)	❌ No	Precedencia importa:
• *px++ → devuelve el valor apuntado por px, luego incrementa px.
• *(++px) → primero incrementa px, luego devuelve el valor apuntado.
px++ vs px = px+1	✅ Sí	Ambas avanzan el puntero una posición en memoria (al siguiente int). La diferencia es solo sintaxis.
px + 5 vs px = px+5	❌ No	• px + 5 → calcula una dirección desplazada 5 enteros, pero no cambia px.
• px = px+5 → sí modifica px para que apunte 5 posiciones más adelante.

&v[i] vs (v+i)	✅ Sí	La dirección del elemento v[i] es exactamente v+i. Ejemplo: &v[1] == v+1.
*(px+i) vs px[i]	✅ Sí	Igual que con v, la notación de array sobre puntero es azúcar sintáctico para aritmética de punteros.
*++px vs ++*px	❌ No	• *++px → mueve el puntero al siguiente elemento y devuelve ese valor.
• ++*px → incrementa el valor apuntado por px, no el puntero.