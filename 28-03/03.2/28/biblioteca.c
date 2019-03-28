#include "biblioteca.h"
int saludar()
{
    printf("hola biblioteca");
    return 0;
}
int pedirNumero(int numero)
{
    int numero;
    printf("Ingrese numero: ");
    scanf("%d",&numero);
    return numero;
}
int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintoACero(numero);
    if(respuesta==1)
    {
        resultado=numero/2;
    }
    return respuesta;
}

int esDistintoACero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}
int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}

