#include <stdio.h>

float entradaF(float entrada);
float saidaF(float saida);
float quantidadeAF(float quantidadeA);
float quantidadeBF(float quantidadeB);

int main() {
    float entrada = entradaF(entrada), saida = saidaF(saida), quantidadeA = quantidadeAF(quantidadeA), quantidadeB = quantidadeBF(quantidadeB);

    if (saida < entrada && quantidadeA >= quantidadeB) {
        if (quantidadeA > quantidadeB && quantidadeB <= 100 && entrada > saida) {
        printf("Valvula aberta 10. ");
        } else {
        printf("Valvula aberta 100.");
        }
    } else if (saida > entrada && quantidadeA >= quantidadeB) {
        printf("Valvula abre 50");
    } else if (saida == entrada && quantidadeA > quantidadeB) {
        printf("Valvula aberta 100.");
    } else if (saida >= entrada && (quantidadeA + quantidadeA) * 0.75 < quantidadeB) {
        printf("Valvula aberta 50");
    } else if (quantidadeA < quantidadeB && saida < entrada) {
        printf("Valvula a %.2f", saida);
    }

    return 0;
}

float entradaF(float entrada) {

    printf("Quantidade de agua que entra no reservatorio: ");
    scanf("%f",&entrada);

    return entrada;
}

float saidaF(float saida) {

    printf("Quantidade de agua que sai do reservatorio: ");
    scanf("%f", &saida);

    return saida;
}

float quantidadeAF(float quantidadeA) {

    printf("Quantidade de agua presente no reservatorio A: ");
    scanf("%f", &quantidadeA);

    return quantidadeA;
}

float quantidadeBF(float quantidadeB) {

    printf("Quantidade de agua presente no reservatorio B: ");
    scanf("%f", &quantidadeB);

    return quantidadeB;
}