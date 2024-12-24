#include "area.h"

void metrosParaCentimetros(double metros) {
    double centimetros = metros * 10000; // 1 m^2 = 10,000 cm^2
    printf("\n%.2lf metros quadrados = %.2lf centímetros quadrados\n", metros, centimetros);
}

void centimetrosParaMetros(double centimetros) {
    double metros = centimetros / 10000; // 10,000 cm^2 = 1 m^2
    printf("\n%.2lf centímetros quadrados = %.2lf metros quadrados\n", centimetros, metros);
}

void metrosParaQuilometros(double metros) {
    double quilometros = metros / 1000000; // 1 km^2 = 1,000,000 m^2
    printf("\n%.2lf metros quadrados = %.6lf quilômetros quadrados\n", metros, quilometros);
}

void quilometrosParaMetros(double quilometros) {
    double metros = quilometros * 1000000; // 1 km^2 = 1,000,000 m^2
    printf("\n%.6lf quilômetros quadrados = %.2lf metros quadrados\n", quilometros, metros);
}

void milimetrosParaCentimetros(double milimetros) {
    double centimetros = milimetros / 100; // 100 mm^2 = 1 cm^2
    printf("\n%.2lf milímetros quadrados = %.2lf centímetros quadrados\n", milimetros, centimetros);
}

void centimetrosParaMilimetros(double centimetros) {
    double milimetros = centimetros * 100; // 1 cm^2 = 100 mm^2
    printf("\n%.2lf centímetros quadrados = %.2lf milímetros quadrados\n", centimetros, milimetros);
}


void main(){

    centimetrosParaMetros(100);
}