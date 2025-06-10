#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv) {
    
    char nome[6] = {'D','i','e','g','o','\0'},sobrenome1[7] = {'V','i','a','n','n','a','\0'},sobrenome2[6] = {'L','e','i','t','e','\0'},sobrenome3[9] = {'M','o','n','t','e','m','o','r','\0'};
    char NomeCompleto[30];
    int i,i2,i3,i4;
    i = 0;
    i2 = 0;
    i3 = 0;
    i4 = 0;
    
    while(nome[i] != '\0'){
        NomeCompleto[i] = nome[i];
        i++;
    }
    NomeCompleto[i] = ' ';
    i++;            
    while(sobrenome1[i2] != '\0'){
        NomeCompleto[i] = sobrenome1[i2];
        i2++;
        i++;
    }
    NomeCompleto[i] = ' ';
    i++;
    while(sobrenome2[i3] != '\0'){
        NomeCompleto[i] = sobrenome2[i3];
        i3++;
        i++;
    }
    NomeCompleto[i] = ' ';
    i++;
    while(sobrenome3[i4] != '\0'){
        NomeCompleto[i] = sobrenome3[i4];
        i4++;
        i++;
    }
    
    printf(NomeCompleto);

    
    return 0;
}

