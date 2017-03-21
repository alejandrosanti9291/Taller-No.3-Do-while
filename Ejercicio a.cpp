/*
Programa:Lee la entrada estándar números hasta que se introduzca un cero.
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Programa que lee la entra de varios numeros pero solo sale cuando el usuario ingresa el cero
*/

#include<stdio.h>

int main(){
    int Num,s=0;

    do{
       printf("Ingrese un numero \n");
        scanf("%d",&Num);

        if(Num > 0){
          s+=1;
        }

    }while(Num!=0);
    printf("El numero de valores mayores a cero es %d \n", s);


return 0;
}
