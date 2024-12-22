#ifndef UNIDADES_H
#define UNIDADES_H

float horasparaminutos(float horas) {
    return horas * 60;
}

float horasparasegundos(float horas) {
    return horas * 60 * 60;
}

float minutosparahoras(float minutos) {
    return minutos / 60;
}

float minutosparasegundos(float minutos) {
    return minutos * 60;
}

float segundosparahoras(float segundos) {
    return segundos / 3600;
}

float segundosparaminutos(float segundos) {
    return segundos / 60;
}
#endif // UNIDADES_H