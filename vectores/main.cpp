#include <iostream>
#include "prototipos.h"

int main(){
    punto *puntos=new punto[extremos];
    verificarMemoria(puntos, 1);
    int valor=0, option=1;
    for(int i=0; i<extremos; i++){
        std::cout<<"Give me the #"<<i+1<<" x value: ";
        std::cin>>valor;
        puntos[i].setX(valor);
        std::cout<<"Give me the #"<<i+1<<" y value: ";
        std::cin>>valor;
        puntos[i].setY(valor);
    }
    vectores *Vectores=new vectores[cantVectores];
    Vectores[0].setComponenteX(puntos[1].getComponenteX()-puntos[0].getComponenteX());
    Vectores[0].setComponenteY(puntos[1].getComponenteY()-puntos[0].getComponenteY());
    Vectores[1].setComponenteX(puntos[3].getComponenteX()-puntos[2].getComponenteX());
    Vectores[1].setComponenteY(puntos[3].getComponenteY()-puntos[2].getComponenteY());
    //TO DO: modificar el código de arriba para que no importe el valor de cantVectores
    while(option){
        std::cout<<"Select an option \n\t";
        std::cout<<"1. Show X component \n\t2. Show Y component";
        std::cout<<"\n\t3.Calculate modul \n\t4.Are the two vectors paralel?";
        std::cout<<"\n\t5.Are the two vectors perpendicular? \n\t0. Exit program\n";
        std::cin>>option;
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: {
                std::cout<<"Which vector are you asking for?\n";
                std::cin>>valor;
                if(valor==1){
                    std::cout<<"X component of the vector is: "<<Vectores[0].getComponenteX()<<"\n";
                }
                else{
                    std::cout<<"X component of the vector is: "<<Vectores[1].getComponenteX()<<"\n";
                }
            } break;
            case 2: {
                std::cout<<"Which vector are you asking for?\n";
                std::cin>>valor;
                if(valor==1){
                    std::cout<<"Y component of the vector is: "<<Vectores[0].getComponenteY()<<"\n";
                }
                else{
                    std::cout<<"Y component of the vector is: "<<Vectores[1].getComponenteY()<<"\n";
                }
            } break;
            case 3: {
                std::cout<<"Which vector are you asking for?\n";
                std::cin>>valor;
                if(valor==1){
                    Vectores[0].calcularModulo();
                    std::cout<<"Modul of the vector is: "<<Vectores[0].getModulo()<<"\n";
                }
                else{
                    Vectores[1].calcularModulo();
                    std::cout<<"Modul of the vector is: "<<Vectores[1].getModulo()<<"\n";
                }
            } break;
            case 4: {
                if(esParalelo(Vectores[0], Vectores[1])){
                    std::cout<<"They are paralel.\n";
                }
                else{std::cout<<"They aren't paralel.\n";}
            } break;
            case 5: {
                if(esPerpenducilar(Vectores[0], Vectores[1])){
                    std::cout<<"They are perpendicular.\n";
                }
                else{std::cout<<"They aren't perpendicular.\n";}
            } break;
            default : std::cout<<"No option selected\n";
        }
    }
    delete []puntos;
    delete []Vectores;
    return 0;
}
