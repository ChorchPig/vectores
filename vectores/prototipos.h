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

class punto {
    private:
        int x, y;
    public:
        void setX(int);
        void setY(int);
        int getComponenteX();
        int getComponenteY();
};

enum{
    extremos=4, cantVectores=extremos/2
};

bool esPerpenducilar(vectores, vectores);
bool esParalelo(vectores, vectores);
void verificarMemoria(void *, int);
void confirmarSalida(int *);
#endif // PROTOTIPOS_H_INCLUDED
