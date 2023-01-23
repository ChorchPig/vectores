#include <iostream>
#include "prototipos.h"

int main(){
    punto *puntos=new punto[2];
    int valor=0;
    for(int i=0; i<2; i++){
        std::cout<<"Give me the #"<<i+1<<" x value: ";
        std::cin>>valor;
        puntos[i].setX(valor);
        std::cout<<"Give me the #"<<i+1<<" y value: ";
        std::cin>>valor;
        puntos[i].setY(valor);
    }
    int componente=0;
    for(int i=0; i<2; i++){
        componente=puntos[i].getComponenteX();
        std::cout<<"X component of the #"<<i+1<<" point is: "<<componente<<"\n";
        componente=puntos[i].getComponenteY();
        std::cout<<"Y component of the #"<<i+1<<" point is: "<<componente<<"\n";
    }
    vectores Vector;
    Vector.calcularComponenteX(puntos[0].getComponenteX(), puntos[1].getComponenteX());
    Vector.calcularComponenteY(puntos[0].getComponenteY(), puntos[1].getComponenteY());
    std::cout<<"X component of the vector between those two points is: "<<Vector.getComponenteX()<<"\n";
    std::cout<<"Y component of the vector between those two points is: "<<Vector.getComponenteY()<<"\n";
    Vector.calcularModulo();
    std::cout<<"Modul of the vector between those two points is: "<<Vector.getModulo()<<"\n";
    delete []puntos;
    return 0;
}
