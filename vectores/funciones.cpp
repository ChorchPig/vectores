#include <iostream>
#include <cmath>
#include "prototipos.h"

void punto::setX(int x){
    this->x=x;
}
int punto::getComponenteX(){
    return x;
}

void punto::setY(int y){
    this->y=y;
}
int punto::getComponenteY(){
    return y;
}

void vectores::calcularComponenteX(int puntoA, int puntoB){
    componenteX=puntoB-puntoA;
}
int vectores::getComponenteX(){
    return componenteX;
}

void vectores::calcularComponenteY(int puntoA, int puntoB){
    componenteY=puntoB-puntoA;
}
int vectores::getComponenteY(){
    return componenteY;
}

void vectores::calcularModulo(){
    modulo=sqrt(pow(componenteX, 2)+pow(componenteY, 2));
}

double vectores::getModulo(){
    return modulo;
}
