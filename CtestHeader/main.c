/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Marcos-Paulo
 *
 * Created on 16 de Maio de 2020, 08:51
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 2;

    printf("Calculos de %i, Quadrado: %i, Cubo: %i", n, quadrado(n), cubo(n));

    return (EXIT_SUCCESS);
}

