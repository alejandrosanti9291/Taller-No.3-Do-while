/*
Programa: Leer valores enteros.
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Programa que lee valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el cero.
El programa debe entragar la suma delos valores mayores a 0.
*/

#include<stdio.h>

int main(){

    int Num, suma=0;

    do{
        printf("Ingrese un numero \n");
        scanf("%d",&Num );
        if(Num > 0 ){
            suma=suma + Num;
        }
    }while((Num != 0) && (Num < 20 || Num > 30 ));

    printf("La suma de los valores mayores a cero es %d \n", suma);


    return 0;
}
