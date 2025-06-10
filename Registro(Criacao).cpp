#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct { 
    string nome;
    string email;
    string cidade;
    int celular;
} amigo; 

int main() {
    int opcao , quant = 1;
    cout << "Oque voce deseja?\n(1).Escrever na agenda  (2).Ler a agenda  (3).Editar a agenda  (4).Sair\nR: ";
    cin >> opcao;
    amigo amigos[100];

    switch(opcao){
    case 1:{
        
        int continua = 1;
        while(continua == 1){ // precina passar a escrita das informações para um vetor antes de passar para o arquivo
        cout << quant ;
            cout << "Digite o nome do amigo: " ;
            cin >> amigos[quant - 1].nome;
            cout << "Digite o email do amigo: ";
            cin >> amigos[quant - 1].email;
            cout << "Digite a cidade do amigo: ";
            cin >> amigos[quant - 1].cidade;
            cout << "Digite o celular do amigo: ";
            cin >> amigos[quant - 1].celular;

            cout << "Deseja continuar?\n(1).Sim  (2).Nao\n";    
            cin >> continua;
            if(continua == 1){
            quant = quant + 1;
            }
        }
    
    break;
    }
    case 2:{
        int opcao2;
        cout << "Qual lista voce deseja ler?\n(1).Escrita agora  (2).Lista salva anteriomente";
        cin >> opcao2;
        switch (opcao2){
        case 1: {
            if(quant > 1){
                for(int i = 0 ; i < quant ; i++){
                    cout << "O " << i << " da lista e o " << amigos[i].nome << " com o email " << amigos[i].email << " na cidade " << amigos[i].cidade << "com o numero " << amigos[i].celular << endl;
                }
            } else cout << "Ainda nao tem nada escrito na lista atual";
            break;
        }
        case 2: {
            ifstream LeituraAgenda("Registro.txt");
            if (!LeituraAgenda) {
                cout << "Erro ao abrir o arquivo para leitura." << endl;
                return 1;
            }
            int i=0;
            LeituraAgenda >> amigos[quant].nome;
            while (amigos[quant].nome != "Fim"){ // O problema da repetição entrar em  loop é por conta da atribuição do A
                i++;
                              
                LeituraAgenda >> amigos[quant].email;
                LeituraAgenda >> amigos[quant].cidade;
                LeituraAgenda >> amigos[quant].celular;

                cout << "O " << i << "° contato da lista é o " << amigos[quant].nome << " com o email: " << amigos[quant].email << " mora na cidade: " << amigos[quant].cidade << " e seu telefone é: " << amigos[quant].celular;
                quant++;
                LeituraAgenda >> amigos[quant].nome;
            }
   
            LeituraAgenda.close();
            cout << endl;
            break;
        }    
        break;   
    }
    case 3:{ // fazer todos os metodos de edição com o vetor "amigos"
        int opcao3;
        cout << "Oque deseja fazer?\n(1).Editar algum contato  (2).Deletar algum contato\n";  
        cin >> opcao3;
        while(opcao3 != 3){
            switch(opcao3){
            case 1:{
                int x;
                cout << "Qual contato deseja editar?\n";
                for(int i = 0 ; i < quant ; i++){
                    cout << i << " - " << amigos[i].nome << endl;
                }
                cin >> x;
                cout << "Digite o novo nome do amigo: ";
                cin >> amigos[x].nome;
                cout << "Digite o novo email do amigo: ";
                cin >> amigos[x].email;
                cout << "Digite a nova cidade do amigo: ";
                cin >> amigos[x].cidade;
                cout << "Digite o novo celular do amigo: ";
                cin >> amigos[x].celular;
                break;
            }
            case 2:{
                int x;
                cout << "Qual contato deseja deletar?\n";
                for(int i = 0 ; i < quant ; i++){
                    cout << i << " - " << amigos[i].nome << endl;
                }
                cin >> x;
                for(int i = x ; i < quant ; i++){
                    amigos[i] = amigos[i+1];
                }
                quant--;
                break;
            }
            default:
            opcao3 = 3;
            break;
        } 
        }
        
        break;
    }

    default:
        ofstream EscritaAgenda("Registro.txt");
        if (!EscritaAgenda) {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
        return 1;
        }

        for(int i = 0 ; i < quant; i++){
            EscritaAgenda << amigos[i].nome << " " << amigos[i].email << " " << amigos[i].cidade << " " << amigos[i].celular << endl;
        }
        EscritaAgenda.close();
        break;
    }
    return 0;
}
}