#include <stdio.h>

     // carta1 //

    int main() {
        char estado[50] = "Ceara";
        char codigo[50] = "C01";
        char cidade1[50] = "Fortaleza";
        int populacao = 8794957;
        float area = 148894442;
        float PIB =	213.601;
        int turismo = 85.712;

        printf("O estado é: %s\n", estado);
        printf("O codigo é: %s\n", codigo);
        printf("A cidade1 é: %s\n", cidade1);
        printf("A populacao é: %d\n", populacao);
        printf("A area é: %f\n", area);
        printf("O PIB é: %f\n", PIB);
        printf("O turismo é: %.3f\n", turismo);

        return 0;
    }