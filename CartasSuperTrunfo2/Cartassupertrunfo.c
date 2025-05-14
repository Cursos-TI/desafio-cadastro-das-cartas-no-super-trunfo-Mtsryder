 // carta2 //

      #include <stdio.h>

    int main() {
        char estado[50] = "bahia";
        char codigo[50] = "BA1";
        char cidade[50] = "recife";
        int populacao = 14850513 ;
        float area = 564760429;
        float PIB = 402646605640;
        int turismo = 482100 ;

        printf("O estado é: %s\n", estado);
        printf("O codigo é: %s\n", codigo);
        printf("A cidade é: %s\n", cidade);
        printf("A populacao é: %d\n", populacao);
        printf("A area é: %f\n", area);
        printf("O PIB é: %f\n", PIB);
        printf("O turismo é: %.3f\n", turismo);

        return 0;
    }