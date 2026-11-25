#include <stdio.h>

int main (void) {
    char temps[3];
    int soma = 0;
    char media = 0;
    for (int i = 0; i < 3; i++) {
        printf("Digite a temperatura %d: ", i);
        scanf("%c", &temps[i]);
        soma += temps[i]; 
    }
    media = soma / 3;
    printf("Média das temperaturas: %c", media);
    return 0;
}
