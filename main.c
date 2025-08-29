#include <stdio.h>

int main() {
    char operadores;
    double num1, num2, resultado;
    
    printf("Selecione o operador\n");
    printf("Soma (+), Subtração (-), divise(/), e multiplicação(*)");
    
    scanf(" %c", &operadores);
    
    printf("Digite o Primeiro Número: ");
    scanf("%lf", &num1);
    
    printf("Digite o Segundo Número: ");
    scanf("%lf", &num2);
    
    switch(operadores){
        case '+':
            resultado = num1 + num2;
                break;
        case '-':
            resultado = num1 - num2;
                break;
        case '*':
            resultado = num1 * num2;
                break;
        case '/':
        if(num2 != 0){
            resultado = num1/num2;
        }else{
            printf("Erro, não é permitida a divisão por 0 né burro \n");
            return 1;
        }
        break;
            default:
                printf("OPERADOR INVÁLIDO. VAI TOMA NO CU KKJ\n");
                    return 1;
    }
        printf("O Resultado é: %.2lf\n", resultado);
            return 0;
}