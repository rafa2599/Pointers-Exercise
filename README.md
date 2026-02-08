# Pointers-Exercise
Repository with pointer Exercies in C++ 

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

