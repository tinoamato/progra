#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#include "vectorEnteros.h"
#include "utiles.h"


int main()
{
    int vec1 [TAM]={1,2,3,4,5,6,7,8,9};
    //int vec2 [TAM]={1,2,3,4,5,6,7,8,9,11};

    //int vec[TAM];
    //int pos;
    int num;



    /* do
    {
        printf("\nIndique la cantidad de elementos que va a cargar: ");
        scanf("%d",&ce);
    }while((ce>10));

     llenarVector(vec,ce);



    do
    {
        printf("\nIndique la posicion en la que desea eliminar el elemento: ");
        scanf("%d",&pos);
    }while(pos>ce);
*/


printf("\nIndique el numero que quiere insertar en el vector: ");
scanf("%d",&num);


    insertarEnVecOrdenado(vec1,TAM,num);
    mostrarVector(vec1,TAM);


    /*int resultado;

    resultado=compararVector(vec1,vec2, TAM);
    if(resultado==1)
    {
        printf("\nSON DISTINTOS\n");
    }
    else
    {
        printf("\nSON IGUALES\n");
    }*/













    return 0;
}
