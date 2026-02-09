#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>

#define N_PS 4

using namespace std; 
typedef struct 
{
    int dia;
    int mes;
    int anio;
} FECHA;

typedef struct {
    char nombre[20];
    FECHA nac;
    long int dni;
} persona;

void printfecha (FECHA *f){
         printf("dia:%d - mes:%d - anio:%d\n",f->dia,f->mes,
            f->anio);

}

void printpersona (persona *p){
    printf("nombre %s,dni %ld,nac:",p->nombre,p->dni);
    printfecha(&(p->nac));
}