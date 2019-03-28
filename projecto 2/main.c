#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int esUnNumero(char*cadena)
{
    int indice=0;
    int retorno=0;
    //printf("palabra por parametro %s",cadena);

    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'0'||cadena[indice]>'9')
        {
            break;
        }else{
            indice++;
        }
    }
    if(cadena[indice]=='\0')
    {
        retorno=1;
    }
    return retorno;
}

int main()
{
    int es;
    //char letra;
    char palabra [20];
    //int numero;
    /* scanf("%d",&numero);
     fflush(stdin);
     printf("\nnumero %d",numero);

     scanf("%c",&letra);
     fflush(stdin);
     printf("\nLetra %c",letra);
    */
    printf("Ingrese la palabra: ");
    scanf("%s",palabra);
    fflush(stdin);
    printf("\nLa palabra es: %s",palabra);
    es=esUnNumero(palabra);
    if(es==1)
    {
        printf("es correcto");
    }else{
        printf("No lo es");
    }

    /*fflush(stdin);
    int indice=0;
    while(indice<20)
    {
        if(palabra[indice]=='\0')
        {
            printf("\nEl barra cero esta en %d",indice);
        }
        printf("\nletra %d",palabra[indice]);
        indice++;
        //fflush(stdin);
    }

    //saludar();
*/
    return 0;
}
