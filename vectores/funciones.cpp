#include <iostream>
#include <cmath>
#include <cstdlib>
#include "prototipos.h"

void verificarMemoria(void *ptr, int llamado){
    if(!ptr){
        std::cout<<"Error occurd in the "<<llamado<<" call.\n";
        exit(EXIT_FAILURE);
    }
}

void confirmarSalida(int *option){
    std::cout<<"You're about to exit the program, to confirm this action press 0: ";
    std::cin>>*option;
}

bool esPerpenducilar(vectores Vector1, vectores Vector2){
    int suma, *componentes=new int[4];
    verificarMemoria(componentes, 2);
    bool afirmacion;
    componentes[0]=Vector1.getComponenteX();
    componentes[1]=Vector1.getComponenteY();
    componentes[2]=Vector2.getComponenteX();
    componentes[3]=Vector2.getComponenteY();
    suma=componentes[0]*componentes[2]+componentes[1]*componentes[3];
    (suma==0)?afirmacion=true : afirmacion=false;
    delete []componentes;
    return afirmacion;
}

bool esParalelo(vectores Vector1, vectores Vector2){
    int escalar1=0, escalar2=0, *componentes=new int[4];
    verificarMemoria(componentes, 3);
    componentes[0]=Vector1.getComponenteX();
    componentes[1]=Vector1.getComponenteY();
    componentes[2]=Vector2.getComponenteX();
    componentes[3]=Vector2.getComponenteY();
    for(int i=0; i<4; i++){
        if(componentes[i]==0) {
            std::cout<<"Null component.\n"; //No es del todo exacto pero evita que posibles errores al dividir por cero
            return false;
        }
    }
    escalar1=componentes[0]/componentes[2];
    escalar2=componentes[1]/componentes[3];
    bool afirmacion;
    (escalar1==escalar2)?afirmacion=true:afirmacion=false;
    delete []componentes;
    return  afirmacion;
}

void vectores::setComponenteX(int componenteX){
    this->componenteX=componenteX;
}
int vectores::getComponenteX(){
    return componenteX;
}

void vectores::setComponenteY(int componenteY){
    this->componenteY=componenteY;
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
