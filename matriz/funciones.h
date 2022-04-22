void aVector(char [], int);//a==asignar
void imprimirVector(char [], int);
void aMatriz(int filas, int columnas, float vec[filas][columnas]);
void imprimirMatriz(int filas, int columnas, float vec[filas][columnas]);

void aVector(char vec[], int l){
    for(int i=0; i<l; i++){
        printf("Dame el %i valor del vector.\n", i+1);
        scanf(" %c", &vec[i]);
    }
}

void imprimirVector(char vec[], int l){
    for(int i=0; i<l; i++){
        printf("%c ", vec[i]);
    }
}

void aMatriz(int filas, int columnas, float vec[filas][columnas]){
    int i, j;
    for(i=0; i<filas; i++){
        for(j=0; j<columnas; j++){
            printf("Dame el %i º valor del %i º conjunto.\n", j+1, i+1);
            scanf("%f", &vec[i][j]);
        }
    }
}

void imprimirMatriz(int filas, int columnas, float vec[filas][columnas]){
    int i, j;
    for(i=0; i<filas; i++){
        for(j=0; j<columnas; j++){
            printf("%f ", vec[i][j]);
        }
        printf("\n");
    }
}
