#include <stdio.h>
#include <biblioteca.h>
#include <string.h>

struct x {
    char ponto[];
    int distancia;
    float comprimento;

}

int main() {

    struct ponto vetor;

    strcpy(ponto.valor, "xa");
    ponto.valor = 1;
    ponto.distancia = 2;

    printf("Ponto: %s\n", ponto.vlaor);
    printf("Distancia: %d\n", ponto.distancia);
    printf("Comprimento: %.2f\n", ponto.comprimento);

    return 0;
}

int main() {

    struct ponto vetor;

    strcpy(ponto.valor, "ya");
    ponto.valor = 4;
    ponto.distancia = 8;

    printf("Ponto: %s\n", ponto.valor);
    printf("Distancia: %d\n", ponto.distancia);
    printf("Comprimento: %.2f\n", ponto.comprimento);

    return 0;
}
