#include <stdio.h>
#include <math.h> 

int main() {
    char operador;
    double resultado, num;
    int n, i;
    
    printf("Selecione o operador:\n");
    printf("Soma (+), Subtração (-), Multiplicação (*), Divisão (/)\n");
    printf("Potência (^), Raiz quadrada (r)\n");
    
    scanf(" %c", &operador);

    printf("Quantos números você deseja inserir? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Que tal usar números? Acho que você digitou algo de errado\n");
        return 1;
    }

    printf("Digite o primeiro número: ");
    if (scanf("%lf", &resultado) != 1) {
        printf("Entrada inválida para o primeiro número.\n");
        return 1;
    }

    for (i = 1; i < n; i++) {
        printf("Digite o próximo número: ");
        if (scanf("%lf", &num) != 1) {
            printf("Entrada inválida para o número %d.\n", i + 1);
            return 1;
        }

        switch(operador) {
            case '+':
                resultado += num;
                break;
            case '-':
                resultado -= num;
                break;
            case '*':
                resultado *= num;
                break;
            case '/':
                if (num != 0) {
                    resultado /= num;
                } else {
                    printf("Divisão por zero não tem como.\n");
                    return 1;
                }
                break;
            default:
                printf("Erro: operador inválido.\n");
                return 1;
        }
    }

    if (operador == '0') {
        if (resultado >= 0) {
            resultado = sqrt(resultado); 
        } else {
            printf("Raiz quadrada de número negativo não tem como fazer isso. Tente novamente.\n");
            return 1;
        }
    } else if (operador == '^') {
        printf("Digite o segundo número (exponente): ");
        if (scanf("%lf", &num) != 1) {
            printf("Erro, provavelmente você colocou um caractere. Tente novamente.\n");
            return 1;
        }
        resultado = pow(resultado, num);  
    }

    printf("O resultado é: %.2lf\n", resultado);

    return 0;
}



// usando o codigo (scanf("%d", &n) != 1 || n <= 0) ele nos permite deixar escolher uma quantidade de numeros, o || é o OR ou OU, o n é so uma variavel que recebe uma quantidade de numeros que selecionamos.
// lembrese que ele é sempre maior ou igual a zero, O operador igual a ( == ) retorna true se ambos os operandos tiverem o mesmo valor; caso contrário, retorna false. 
// O operador não é igual a ( != ) retorna true se os operandos não tiverem o mesmo valor; caso contrário, retorna false.
// também foi adicionada mais mensagem com o printf que ja corta o usuario na hora, mostrando onde ta o erro, falando que ele errou colocando um caracter ou um numero invalido ou ate um operador invalido.
// segundo o google As funções sqrt() e pow() são funções matemáticas muito comuns em programação, especialmente em C, quando trabalhamos com operações numéricas. Ambas estão disponíveis na biblioteca <math.h>, que precisa ser incluída no início do programa.
// A função sqrt() é usada para calcular a raiz quadrada de um número. Ela recebe um número como argumento e retorna a raiz quadrada desse número.
// A função pow() é usada para calcular a potência de um número. Ela recebe dois argumentos: a base e o expoente, e retorna a base elevada à potência do expoente. A sintaxe básica da função é:
// O tipo de dado char é usado para armazenar caracteres individuais, como letras, números, símbolos e outros caracteres. Na realidade, char é um tipo inteiro de 1 byte (8 bits), mas ele é interpretado de maneira especial para representar caracteres.
// O tipo de dado double é usado para armazenar números de ponto flutuante, ou seja, números que podem ter uma parte inteira e uma parte decimal. O double oferece precisão dupla em comparação com o tipo float (que é de precisão simples).




