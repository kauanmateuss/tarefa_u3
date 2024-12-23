#include <stdio.h>
#include "unidadeTemperatura.h"

// Implementação da função para converter temperaturas
double converterTemperatura(double valor, char unidadeOrigem, char unidadeDestino) {
    double resultado;

    if (unidadeOrigem == 'C') { // Origem em Celsius
        if (unidadeDestino == 'F') {
            resultado = (valor * 9 / 5) + 32; // Celsius para Fahrenheit
        } else if (unidadeDestino == 'K') {
            resultado = valor + 273.15; // Celsius para Kelvin
        } else {
            resultado = valor; // Sem conversão
        }
    } else if (unidadeOrigem == 'F') { // Origem em Fahrenheit
        if (unidadeDestino == 'C') {
            resultado = (valor - 32) * 5 / 9; // Fahrenheit para Celsius
        } else if (unidadeDestino == 'K') {
            resultado = ((valor - 32) * 5 / 9) + 273.15; // Fahrenheit para Kelvin
        } else {
            resultado = valor; // Sem conversão
        }
    } else if (unidadeOrigem == 'K') { // Origem em Kelvin
        if (unidadeDestino == 'C') {
            resultado = valor - 273.15; // Kelvin para Celsius
        } else if (unidadeDestino == 'F') {
            resultado = ((valor - 273.15) * 9 / 5) + 32; // Kelvin para Fahrenheit
        } else {
            resultado = valor; // Sem conversão
        }
    } else {
        printf("Unidade de origem inválida!\n");
        return -1;
    }

    return resultado;
}
