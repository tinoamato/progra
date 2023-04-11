int insertarNumEnVec(int* vec,int dato, int ce,int tamano, int posicion)
{
    int aux,datoPerdido=0,cont=0;
    vec+=ce;
    while((cont<=(ce-posicion))){

        aux=*vec;
        if(ce==tamano){
            datoPerdido==1;
        }
        else{
        *(vec+1)=aux;
        *vec=*(vec-1);
        vec--;
        cont++;
        }
    };
    aux=*vec;
    *vec=dato;
    *(vec+1)=aux;
    return datoPerdido;
}



void insertarEnVecOrdenado (int* vec1,int tam,int num)
{
    int auxPos,auxNum,numPerdido,cont=0;

    do
    {
        if ((*vec1<num && *(vec1+1)>num))
        {
            //auxPos=++vec1;
            auxNum=*(vec1+1);
            numPerdido = insertarNumEnVec(vec1,auxNum,9,tam,vec1+1);
            if(numPerdido==1)
            {
                printf("\nSe perdio un dato.\n");
            }
            printf("AAA\n");
            cont=tam;

        }
        else
        {
            cont++;
            printf("BBB\n");
        }

        vec1++;

    }while(cont>tam);


}





void eliminarNumEnVec (int* vec, int ce, int tam, int pos)
{
    int cont=0;
    vec+=pos-1;
    *vec=*(vec+1);

    while (cont<(ce-pos))
    {
        vec++;
        *vec=*(vec+1);
        cont++;
    }

}







void llenarVector (int *vec,int ce)
{
    int i,dato;

    for(i=0;i<ce;i++)
    {
        printf("\nIngrse el dato para la posicion %d: ",i+1);
        scanf("%d",&dato);
        *vec=dato;

        vec++;
    }
}



void mostrarVector (int* vec,int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("\n%d",*vec);
        vec++;
    }
}

int compararVector (int* vec1,int* vec2, int ce)
{
    int i=0,flag=0;

    do
    {
        if (*vec1!=*vec2)
        {
            flag=1;
        }
        vec1++;
        vec2++;
        i++;


    }while(!(i>=ce || flag==1));



    return flag;
}


