#include <stdio.h>

int main (){
    int num;
    int soma = 0;
    printf("Insira um número: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        soma = i * i + soma;
    } printf("Soma: %d", soma);
    return 0;
}
