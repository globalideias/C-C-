/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Marcos-Paulo
 *
 * Created on 10 de Maio de 2020, 17:04
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    HMODULE libHandle;

    if ((libHandle = LoadLibrary(TEXT("MathLibrary.dll"))) == NULL)
    {
        printf("load failed\n");
        return 1;
    }
    if (GetProcAddress(libHandle, "fibonacci_init") == NULL)
    {
        printf("GetProcAddress failed\n");
        printf("%u\n", GetLastError());
        return 1;
    }    
    return (EXIT_SUCCESS);
}

