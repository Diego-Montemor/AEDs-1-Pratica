#include <cstdlib>
#include <stdio.h>

int main(int argc, char** argv) {

    char* Classificacao;
    int AnosDeHabilitacao, InfracaoNosUltimosAnos, InfracoesGravesNosUltimosAnos, Idade;


    printf("Digite sua idade: ");
    scanf("%d", &Idade);
    printf("Digite há quantos anos você possui sua habilitação: ");
    scanf("%d", &AnosDeHabilitacao);
    printf("Digite quantas Infrações você cometeu nos ultimos 5 anos: ");
    scanf("%d", &InfracaoNosUltimosAnos);
    printf("Digite quantas infrações graves você cometeu nos ultimos 2 anos: ");
    scanf("%d", &InfracoesGravesNosUltimosAnos);

    if ((Idade < 18) or ( (18 >= Idade and Idade >=21) and AnosDeHabilitacao < 2 ) ){
        Classificacao = "Inesperiente";
    } else if((65 >= Idade and Idade >= 22) and AnosDeHabilitacao >= 2 and InfracoesGravesNosUltimosAnos == 0 ){
        Classificacao = "Regular";
    } else if((Idade < 21 and InfracoesGravesNosUltimosAnos > 0) or Idade > 65 or (InfracaoNosUltimosAnos > 4) or InfracoesGravesNosUltimosAnos > 0 ){
        Classificacao = "Risco";
    } else if((60 >= Idade and Idade >= 30) and AnosDeHabilitacao > 5 and InfracaoNosUltimosAnos == 0 ){
        Classificacao = "Seguro";
    } else {
        printf("Esta faltando considerar algo");
    }

    printf("\nVocê foi classificado como um motorista: ");
    printf(Classificacao);


    return 0;
}

