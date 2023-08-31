#include <iostream>
#include <cstdlib>
#include "prototipos.h"

//TO DO: Modificar esParalelo
int main(){
    int valor=0, aux=0, option=1;
    vectores *Vectores=new vectores[cantVectores];
    verificarMemoria(Vectores, 1);
    for(int i=0; i<cantVectores; i++){
        std::cout<<"Give me the x value of the #"<<i+1<<" vector: ";
        std::cin>>valor;
        Vectores[i].setComponenteX(valor);
        std::cout<<"Give me the y value of the #"<<i+1<<" vector: ";
        std::cin>>valor;
        Vectores[i].setComponenteY(valor);
    }
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
                if(valor>cantVectores){std::cout<<"The vector does not exist.\n";}
                else{std::cout<<"X component of the value is: "<<Vectores[valor-1].getComponenteX()<<".\n";}
            } break;
            case 2: {
                std::cout<<"Which vector are you asking for?\n";
                std::cin>>valor;
                if(valor>cantVectores){std::cout<<"The vector does not exist.\n";}
                else{std::cout<<"Y component of the value is: "<<Vectores[valor-1].getComponenteY()<<".\n";}
            } break;
            case 3: {
                std::cout<<"Which vector are you asking for?\n";
                std::cin>>valor;
                std::cout<<"Modul of the vector is: "<<Vectores[valor-1].getModulo()<<".\n";
            } break;
            case 4: {
                std::cout<<"Vector 1: ";
                std::cin>>aux;
                std::cout<<"\n Vector 2:";
                std::cin>>valor;
                std::cout<<"\n";
                (esParalelo(Vectores[aux], Vectores[valor]))?std::cout<<"They are paralel.\n" : std::cout<<"They aren't paralel.\n";
            } break; //No revisa que Vectores[aux] y Vectores[valor] existan
            case 5: {
                std::cout<<"Vector 1: ";
                std::cin>>aux;
                std::cout<<"\n Vector 2:";
                std::cin>>valor;
                std::cout<<"\n";
                (esPerpenducilar(Vectores[aux], Vectores[valor]))?std::cout<<"They are perpendicular.\n" : std::cout<<"They aren't perpendicular.\n";
            } break; //No revisa que Vectores[aux] y Vectores[valor] existan
            default : std::cout<<"No option selected\n";
        }
    }
    delete []Vectores;
    return 0;
}
