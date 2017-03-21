/*
Programa: Solicita un numero estandar del 1 al 10 y su salida es la tabla de multiplicar
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Programa que lee numeros del 1 al 10 y muestra su tabla de multiplicar
*/

#include<stdio.h>

int main(){
    int Num, i = 1;

    printf("Ingrese un numero \n");
    scanf("%d",&Num);
    if(Num > 0 && Num <= 10 ){
        do{
            printf("%d x %d = %d \n", Num, i, Num*i);
            i+=1;
        }while(i <= 10);
    }else{
        printf("El numero ingresado no es valido \n");
    }

    return 0;
}
