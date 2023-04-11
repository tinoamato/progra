#ifndef VECTORENTEROS_H_INCLUDED
#define VECTORENTEROS_H_INCLUDED

//Funciones de vectores
int insertarNumEnVec(int* vec,int dato, int ce,int tamano, int posicion);
void insertarEnVecOrdenado (int* vec1,int tam,int num);
void eliminarNumEnVec (int* vec, int ce, int tam, int pos);
void mostrarVector (int* vec,int ce);
void llenarVector (int vec,int ce);
int compararVector (int* vec1,int* vec2, int ce);


#endif // VECTORENTEROS_H_INCLUDED
