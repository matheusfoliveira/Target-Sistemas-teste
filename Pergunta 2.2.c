/* Teste Target Sistemas por Matheus Fernandes Oliveira

2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/
#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, fib_atual = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (fib_atual < num) {
        fib_atual = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_atual;
    }

    if (fib_atual == num) {
        printf("%d pertence a sequencia de Fibonacci.", num);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.", num);
    }

    return 0;
}