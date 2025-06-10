#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    
    string figura;
     float areatotal,volumepiramide ,volumeparalelepipedo,volumecilindro,volumeesfera, volumecubo;
     
    ifstream valores("CenaGrafica.txt");
    if (not valores.is_open()){
        cout << "\n\tERRO: O arquivo não foi aberto\n";
        return 1;
    }
    
    valores >> figura;
    
    while (figura != "Fim"){
        if (figura == "Cubo"){
            int lado;
            valores >> lado;
            volumecubo = lado*lado*lado;
        }else if(figura == "Triangulo"){
            int lado1,lado2,lado3;           
            valores >> lado1;
            valores >> lado2;
            valores >> lado3;
            volumepiramide = ((lado1*lado2/2)*lado3/3);
        }else if(figura == "Paralelepipedo"){
            int lado1,lado2,lado3;
            valores >> lado1;
            valores >> lado2;
            valores >> lado3;
            volumeparalelepipedo = lado1*lado2*lado3;
        }else if(figura == "Cilindro"){
            int raio, altura;        
            valores >> raio;
            valores >> altura;
            volumecilindro = ((raio*raio*3.14)*altura);
        }else if(figura == "Esfera"){
            int raio;    
            valores >> raio;
            volumeesfera = (4/3*3.14*raio*raio*raio);
        }
        valores >> figura;
    }
    areatotal = (volumecubo + volumepiramide + volumeparalelepipedo + volumecilindro + volumeesfera);
    cout << "O volume total é de " << areatotal << "m³" << endl;    
    
    return 0;
}

