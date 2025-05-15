#include <stdio.h>

int main(int c, char* argv[]){
    
    int opcao;

    do(
        printf("Escolha uma opcao :\n1 - Iniciar quiz\n0 - Sair");
        scanf("%d", &opcao);
    )
    while(opcao != 1 && opcao != 0);

    if(opcao == 1){
        do{
            printf("Qual a capital do Brasil?\n1 - Rio de Janeiro\n2 - Brasilia\n");
            scanf("%d", &resposta);
        }
        while(opcao != 1 && opcao != 2);

        if(resposta == 2){
            printf("Voce acertou!\n");
        }
        else (
            printf("Pode melhorar!\n");
        )
        
    }


    return  0;
}