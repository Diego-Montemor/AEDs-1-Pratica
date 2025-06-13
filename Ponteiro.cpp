#include <iostream>

using namespace std;

void bobble(int Vetor[], int tam){
    for(int i = tam - 1 ; i >= 1 ; i--){
        for(int j = 0 ; j < tam - 1 ; j++){
            if(Vetor[j] > Vetor[j + 1]){
                int aux = Vetor[j];
                Vetor[j] = Vetor[j + 1];
                Vetor[j + 1] = aux;
            }
        }
    }
}

int main(){

    int X, Y, Z;
    int *p;
    int v[] = {11,12,13,14,15,16,17,18,19,20};

    X = 10;
    Y = 12;
    Z = 17;

    p = &X;
    printf("\nO valor de &X: %p  \nO valor de X: %X\n",&X,X);
    printf("\nO valor de P: %p  \nO valor de *P: %d\n",p,*p);

    p++;
    printf("\nO valor de p: %p\nO valor de *p: %d\n",p,*p);

    printf("\n--[Valores  do vetor]--");
    for(int *q = v; q < v + 10 ; q++){
        printf("\nO valor de &v[i]: %p\nO valor de v[i]: %d",q,*q);
    }

    printf("\nValores do vetor");
    for(int *q = v + 10 - 1; q >= v ; q--){
        printf("\nO valor de &v[i]: %p\nOvalor de v[i]: %d", q, *q);
    }

    return 0;
}