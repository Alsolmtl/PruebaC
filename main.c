/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: alsolmtl
 *
 * Created on 10 de septiembre de 2021, 14:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char numero [4];
    int millares, centenas, decenas, unidades;
    printf("\nDigite un numero de cuatro digitos: ");
    scanf("%s",&numero);
    switch(numero[0]){
        case '1':
            millares=1;
            break;
        case '2':
            millares=2;
            break;
        case '3':
            millares=3;
            break;
        case '4':
            millares=4;
            break;
        case '5':
            millares=5;
            break;
        case '6':
            millares=6;
            break;
        case '7':
            millares=7;
            break;
        case '8':
            millares=8;
            break;
        case '9':
            millares=9;
            break;
    }
    switch(numero[1]){
        case '1':
            centenas=1;
            break;
        case '2':
            centenas=2;
            break;
        case '3':
            centenas=3;
            break;
        case '4':
            centenas=4;
            break;
        case '5':
            centenas=5;
            break;
        case '6':
            centenas=6;
            break;
        case '7':
            centenas=7;
            break;
        case '8':
            centenas=8;
            break;
        case '9':
            centenas=9;
            break;
        case '0':
            centenas=0;
            break;
    }
    switch(numero[2]){
        case '1':
            decenas=1;
            break;
        case '2':
            decenas=2;
            break;
        case '3':
            decenas=3;
            break;
        case '4':
            decenas=4;
            break;
        case '5':
            decenas=5;
            break;
        case '6':
            decenas=6;
            break;
        case '7':
            decenas=7;
            break;
        case '8':
            decenas=8;
            break;
        case '9':
            decenas=9;
            break;
        case '0':
            decenas=0;
            break;
    }
    switch(numero[3]){
        case '1':
            unidades=1;
            break;
        case '2':
            unidades=2;
            break;
        case '3':
            unidades=3;
            break;
        case '4':
            unidades=4;
            break;
        case '5':
            unidades=5;
            break;
        case '6':
            unidades=6;
            break;
        case '7':
            unidades=7;
            break;
        case '8':
            unidades=8;
            break;
        case '9':
            unidades=9;
            break;
        case '0':
            unidades=0;
            break;
    }
    if (((millares%2)==0)&&((centenas%2)==0)&&((decenas%2)==0)&&((unidades%2)==0))
    {
         printf("\nTodos los numeros son pares");
    }
    else
    {
         printf("\nNo todos los numeros son pares");
    }         
    return (EXIT_SUCCESS);
}

