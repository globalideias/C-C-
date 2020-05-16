/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Marcos-Paulo
 *
 * Created on 10 de Maio de 2020, 10:58
 */

#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    char str[80];
    float f,g;
    FILE * pFile;
    
    pFile = fopen("myteste.txt","w+");
    fprintf(pFile,"%f %s",3.1416,"PI");
    rewind(pFile);
    fscanf(pFile,"%f",&f);
    fscanf(pFile,"%s",str);
    fclose(pFile);  
    printf("Valor de %s : %f\n",str,f);
    printf("V %p\n",(*sub));
    printf("V %p\n",(*soma));
    printf("V %d\n",(*sub)(1,2));
    
    return (EXIT_SUCCESS);
}

