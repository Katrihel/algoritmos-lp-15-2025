#include <stdio.h>

int main(int argc, char* argv[]){

    int opcao

    printf("Escolha o tipo de filme:\n");
    printf("0 - Leve \n1 - Intenso\n");
    scanf("%d", $opcao);

    if(opcao == 0){
        printf("Filme LEVE\n");
        printf("Escolha um genero:\n");
        printf("0 - Comedia\n1 - Animacao\n ");
        scanf("%d", %opcao);
        if(opcao == 0){
            printf("Assistir ao filme: As branquelas\n");
        }  
        else if(opcao == 1){
            printf("Assistir ao filme: As branquelas\n");
        }
     }
    else if(opcao == 1){
        printf("Filme INTENSO\n");
    }
    else{
        printf("Opcao indisponivel\n");
    }

    return 0;
}