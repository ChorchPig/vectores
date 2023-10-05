#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

class vectores {
    private:
        int componenteX, componenteY;
        double modulo;
    public:
        void setComponenteX(int);
        void setComponenteY(int);
        void calcularModulo();
        int getComponenteX();
        int getComponenteY();
        double getModulo();
};

enum{
    cantVectores=2
};

bool esPerpenducilar(vectores, vectores);
bool esParalelo(vectores, vectores);
void verificarMemoria(void *, int);
void confirmarSalida(int *);
int productoEscalar(vectores, vectores);
void productoVectorial(vectores, vectores); //Crear la función
#endif // PROTOTIPOS_H_INCLUDED
