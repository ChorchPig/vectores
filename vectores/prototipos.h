#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

class vectores {
    private:
        int componenteX, componenteY;
        double modulo;
    public:
        void calcularComponenteX(int, int);
        void calcularComponenteY(int, int);
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

#endif // PROTOTIPOS_H_INCLUDED
